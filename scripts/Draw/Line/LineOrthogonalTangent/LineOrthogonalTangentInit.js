function init(basePath) {
    var action = new RGuiAction(qsTranslate("LineOrthogonalTangent", "Orthogonal / Tange&nt"),
        RMainWindowQt.getMainWindow());
    action.setRequiresDocument(true);
    action.setScriptFile(basePath + "/LineOrthogonalTangent.js");
    action.setIcon(basePath + "/LineOrthogonalTangent.svg");
    action.setStatusTip(qsTranslate("LineOrthogonalTangent", "Draw line orthogonal to line and tangent to circle, arc or ellipse"));
    action.setDefaultShortcut(new QKeySequence("l,n"));
    action.setDefaultCommands(["lineorthogonaltangent", "orthotangent", "ln"]);
    action.setSortOrder(1150);
    EAction.addGuiActionTo(action, Line, true, true, true);
}