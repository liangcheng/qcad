// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaSnapAuto.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
                #include "RMouseEvent.h"
            
                #include "RGraphicsView.h"
            
            
        // includes for base ecma wrapper classes
        
                  #include "REcmaSnap.h"
                 void REcmaSnapAuto::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RSnapAuto*) 0)));
        protoCreated = true;
    }

    
        // primary base class RSnap:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<RSnap*>());

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
    
        // conversion for base class RSnap
        REcmaHelper::registerFunction(&engine, proto, getRSnap, "getRSnap");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, snap, "snap");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RSnapAuto*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(create, *proto, 2);
    
    // static methods:
    
            REcmaHelper::registerFunction(&engine, &ctor, init, "init");
            

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RSnapAuto",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaSnapAuto::create(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RSnapAuto(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
    
            // constructor without variants:
            
    if( context->argumentCount() ==
        0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RSnapAuto
                    * cppResult =
                    new
                    RSnapAuto
                    ();
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RSnapAuto(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaSnapAuto::getRSnap(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                RSnap* cppResult =
                    qscriptvalue_cast<RSnapAuto*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaSnapAuto::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RSnapAuto"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaSnapAuto::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("RSnap");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaSnapAuto::snap
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaSnapAuto::snap", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaSnapAuto::snap";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RSnapAuto* self = 
                        getSelf("snap", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RVector */
     && (
            context->argument(1).isVariant() || 
            context->argument(1).isQObject() || 
            context->argument(1).isNull()
        ) /* type: RGraphicsView */
    
    ){
    // prepare arguments:
    
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RVector*
                    ap0 =
                    qscriptvalue_cast<
                    RVector*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if (ap0 == NULL) {
                           return REcmaHelper::throwError("RSnapAuto: Argument 0 is not of type RVector.",
                               context);                    
                    }
                    RVector 
                    a0 = 
                    *ap0;
                
                    // argument is reference
                    RGraphicsView*
                    ap1 =
                    qscriptvalue_cast<
                    RGraphicsView*
                        >(
                        context->argument(
                        1
                        )
                    );
                    if( ap1 == NULL ){
                           return REcmaHelper::throwError("RSnapAuto: Argument 1 is not of type RGraphicsView*.",
                               context);                    
                    }
                    RGraphicsView& a1 = *ap1;
                
    // end of arguments

    // call C++ function:
    // return type 'RVector'
    RVector cppResult =
        
               self->snap(a0
        ,
    a1);
        // return type: RVector
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    3 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RVector */
     && (
            context->argument(1).isVariant() || 
            context->argument(1).isQObject() || 
            context->argument(1).isNull()
        ) /* type: RGraphicsView */
     && (
            context->argument(2).isNumber()
        ) /* type: double */
    
    ){
    // prepare arguments:
    
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RVector*
                    ap0 =
                    qscriptvalue_cast<
                    RVector*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if (ap0 == NULL) {
                           return REcmaHelper::throwError("RSnapAuto: Argument 0 is not of type RVector.",
                               context);                    
                    }
                    RVector 
                    a0 = 
                    *ap0;
                
                    // argument is reference
                    RGraphicsView*
                    ap1 =
                    qscriptvalue_cast<
                    RGraphicsView*
                        >(
                        context->argument(
                        1
                        )
                    );
                    if( ap1 == NULL ){
                           return REcmaHelper::throwError("RSnapAuto: Argument 1 is not of type RGraphicsView*.",
                               context);                    
                    }
                    RGraphicsView& a1 = *ap1;
                
                    // argument isStandardType
                    double
                    a2 =
                    (double)
                    
                    context->argument( 2 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'RVector'
    RVector cppResult =
        
               self->snap(a0
        ,
    a1
        ,
    a2);
        // return type: RVector
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RSnapAuto.snap().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaSnapAuto::snap", context, engine);
            return result;
        }
         QScriptValue
        REcmaSnapAuto::init
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaSnapAuto::init", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaSnapAuto::init";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'void'
    RSnapAuto::
       init();
    } else


        
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isBool()
        ) /* type: bool */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    bool
                    a0 =
                    (bool)
                    
                    context->argument( 0 ).
                    toBool();
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    RSnapAuto::
       init(a0);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RSnapAuto.init().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaSnapAuto::init", context, engine);
            return result;
        }
         QScriptValue REcmaSnapAuto::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RSnapAuto* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RSnapAuto(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaSnapAuto::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RSnapAuto* self = getSelf("RSnapAuto", context);
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
    RSnapAuto* REcmaSnapAuto::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RSnapAuto* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RSnapAuto >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RSnapAuto.%1(): "
                        "This object is not a RSnapAuto").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RSnapAuto* REcmaSnapAuto::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RSnapAuto* selfBase = getSelf(fName, context);
                RSnapAuto* self = dynamic_cast<RSnapAuto*>(selfBase);
                //return REcmaHelper::scriptValueTo<RSnapAuto >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RSnapAuto.%1(): "
                    "This object is not a RSnapAuto").arg(fName),
                    context);
            }

            return self;
            


        }
        