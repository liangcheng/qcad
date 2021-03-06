// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaMdiArea.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include <QToolButton>
            
                #include "RMdiChildQt.h"
            
            
        // includes for base ecma wrapper classes
         void REcmaMdiArea::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RMdiArea*) 0)));
        protoCreated = true;
    }

    
        // primary base class QMdiArea:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<QMdiArea*>());

            if (dpt.isValid()) {
                proto->setPrototype(dpt);
            }
          
        /*
        
        */
    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    
        // conversion for base class QMdiArea
        REcmaHelper::registerFunction(&engine, proto, getQMdiArea, "getQMdiArea");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, getAddTabButton, "getAddTabButton");
            
            REcmaHelper::registerFunction(&engine, proto, updateTabBar, "updateTabBar");
            
            REcmaHelper::registerFunction(&engine, proto, updateTabBarSize, "updateTabBarSize");
            
            REcmaHelper::registerFunction(&engine, proto, updateAddButtonLocation, "updateAddButtonLocation");
            
            REcmaHelper::registerFunction(&engine, proto, closeTab, "closeTab");
            
            REcmaHelper::registerFunction(&engine, proto, activateTab, "activateTab");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RMdiArea*>(), *proto);

        
                        qScriptRegisterMetaType<
                        RMdiArea*>(
                        &engine, toScriptValue, fromScriptValue, *proto);
                    
    

    QScriptValue ctor = engine.newFunction(create, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RMdiArea",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaMdiArea::create(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RMdiArea(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
        
            // generate constructor variants:
            
    if( context->argumentCount() ==
        0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            REcmaShellMdiArea
                    * cppResult =
                    new
                    REcmaShellMdiArea
                    ();
                
                    result = engine->newQObject(context->thisObject(), cppResult);
                
        cppResult->__qtscript_self = result;
    
    } else 

    if( context->argumentCount() ==
        1
                && (
                
                        context->argument(
                        0
                        ).isQObject()
                        ||
                    
                        context->argument(
                        0
                        ).isNull()
                ) /* type: QWidget * */
            
    ){
    // prepare arguments:
    
            // argument isQObject
            QWidget *
            a0 =
            qobject_cast<
            QWidget *>
            ( context->argument(
            0
            ).
            toQObject()
            );
        
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            REcmaShellMdiArea
                    * cppResult =
                    new
                    REcmaShellMdiArea
                    (
                    a0
                    );
                
                    result = engine->newQObject(context->thisObject(), cppResult);
                
        cppResult->__qtscript_self = result;
    
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RMdiArea(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaMdiArea::getQMdiArea(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                QMdiArea* cppResult =
                    qscriptvalue_cast<RMdiArea*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaMdiArea::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RMdiArea"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaMdiArea::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("QMdiArea");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaMdiArea::getAddTabButton
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaMdiArea::getAddTabButton", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaMdiArea::getAddTabButton";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RMdiArea* self = 
                        getSelf("getAddTabButton", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'QToolButton *'
    QToolButton * cppResult =
        
               self->getAddTabButton();
        // return type: QToolButton *
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RMdiArea.getAddTabButton().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaMdiArea::getAddTabButton", context, engine);
            return result;
        }
         QScriptValue
        REcmaMdiArea::updateTabBar
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaMdiArea::updateTabBar", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaMdiArea::updateTabBar";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RMdiArea* self = 
                        getSelf("updateTabBar", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->updateTabBar();
    } else


        
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isQObject()
        ) /* type: RMdiChildQt * */
    
    ){
    // prepare arguments:
    
                    // argument is pointer
                    RMdiChildQt * a0 = NULL;

                    a0 = 
                        REcmaHelper::scriptValueTo<RMdiChildQt >(
                            context->argument(0)
                        );
                    
                    if (a0==NULL && 
                        !context->argument(0).isNull()) {
                        return REcmaHelper::throwError("RMdiArea: Argument 0 is not of type RMdiChildQt *RMdiChildQt *.", context);                    
                    }
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->updateTabBar(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RMdiArea.updateTabBar().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaMdiArea::updateTabBar", context, engine);
            return result;
        }
         QScriptValue
        REcmaMdiArea::updateTabBarSize
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaMdiArea::updateTabBarSize", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaMdiArea::updateTabBarSize";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RMdiArea* self = 
                        getSelf("updateTabBarSize", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->updateTabBarSize();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RMdiArea.updateTabBarSize().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaMdiArea::updateTabBarSize", context, engine);
            return result;
        }
         QScriptValue
        REcmaMdiArea::updateAddButtonLocation
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaMdiArea::updateAddButtonLocation", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaMdiArea::updateAddButtonLocation";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RMdiArea* self = 
                        getSelf("updateAddButtonLocation", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->updateAddButtonLocation();
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RMdiArea.updateAddButtonLocation().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaMdiArea::updateAddButtonLocation", context, engine);
            return result;
        }
         QScriptValue
        REcmaMdiArea::closeTab
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaMdiArea::closeTab", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaMdiArea::closeTab";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RMdiArea* self = 
                        getSelf("closeTab", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isNumber()
        ) /* type: int */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    int
                    a0 =
                    (int)
                    
                    context->argument( 0 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->closeTab(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RMdiArea.closeTab().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaMdiArea::closeTab", context, engine);
            return result;
        }
         QScriptValue
        REcmaMdiArea::activateTab
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaMdiArea::activateTab", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaMdiArea::activateTab";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RMdiArea* self = 
                        getSelf("activateTab", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isNumber()
        ) /* type: int */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    int
                    a0 =
                    (int)
                    
                    context->argument( 0 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    
               self->activateTab(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RMdiArea.activateTab().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaMdiArea::activateTab", context, engine);
            return result;
        }
         QScriptValue REcmaMdiArea::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RMdiArea* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RMdiArea(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaMdiArea::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RMdiArea* self = getSelf("RMdiArea", context);
        //Q_ASSERT(self!=NULL);
        if (self==NULL) {
            return REcmaHelper::throwError("self is NULL", context);
        }
        
    
        delete self;
        context->thisObject().setData(engine->nullValue());
        context->thisObject().prototype().setData(engine->nullValue());
        context->thisObject().setPrototype(engine->nullValue());
        context->thisObject().setScriptClass(NULL);
        return engine->undefinedValue();
    }
    RMdiArea* REcmaMdiArea::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RMdiArea* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RMdiArea >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RMdiArea.%1(): "
                        "This object is not a RMdiArea").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        REcmaShellMdiArea* REcmaMdiArea::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RMdiArea* selfBase = getSelf(fName, context);
                REcmaShellMdiArea* self = dynamic_cast<REcmaShellMdiArea*>(selfBase);
                //return REcmaHelper::scriptValueTo<REcmaShellMdiArea >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RMdiArea.%1(): "
                    "This object is not a RMdiArea").arg(fName),
                    context);
            }

            return self;
            


        }
         void fromScriptValue(const QScriptValue& value,
        RMdiArea*
        &out) {
            QObject* o = value.toQObject();
            out = qobject_cast<
            RMdiArea*>(o);
        }
     QScriptValue toScriptValue(QScriptEngine *engine,
        RMdiArea*
        const &in){
            QScriptValue s = engine->newQObject(in, QScriptEngine::QtOwnership,
            QScriptEngine::PreferExistingWrapperObject);
            /*
            if(s.isNull()){
               REcmaHelper::throwError("This object is null.", engine->currentContext());
            }
            */
            return s;
        }
    