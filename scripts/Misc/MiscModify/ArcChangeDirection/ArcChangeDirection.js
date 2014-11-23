/**
 * Copyright (c) 2011-2014 by Andrew Mustun. All rights reserved.
 * 
 * This file is part of the QCAD project.
 *
 * QCAD is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * QCAD is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with QCAD.
 */

include("../MiscModify.js");

/**
 * Changes the direction of all (selected) arcs.
 */
function ArcChangeDirection(guiAction) {
    MiscModify.call(this, guiAction);
}

ArcChangeDirection.prototype = new MiscModify();

ArcChangeDirection.prototype.beginEvent = function() {
    MiscModify.prototype.beginEvent.call(this);

    var di = this.getDocumentInterface();
    var document = this.getDocument();

    var op = new RModifyObjectsOperation();

    var ids;
    if (document.hasSelection()) {
        ids = document.querySelectedEntities();
    }
    else {
        ids = document.queryAllEntities(false, true);
    }

    for (var i=0; i<ids.length; i++) {
        var id = ids[i];
        var entity = document.queryEntity(id);

        if (isArcEntity(entity)) {
            entity.setReversed(!entity.isReversed());
            var sa = entity.getStartAngle();
            var ea = entity.getEndAngle();
            entity.setStartAngle(ea);
            entity.setEndAngle(sa);
            op.addObject(entity, false);
        }
    }

    di.applyOperation(op);

    this.terminate();
};

ArcChangeDirection.init = function(basePath) {
    var action = new RGuiAction("Change Arc Direction", RMainWindowQt.getMainWindow());
    action.setRequiresDocument(true);
    action.setScriptFile(basePath + "/ArcChangeDirection.js");
    action.setGroupSortOrder(56100);
    action.setSortOrder(100);
    action.setWidgetNames(["MiscModifyMenu", "MiscModifyToolBar", "MiscModifyToolsPanel"]);
};