


	// ***** AUTOGENERATED CODE, DO NOT EDIT *****
    
        #ifndef RECMASHELLFOCUSLISTENERADAPTER_H
        #define RECMASHELLFOCUSLISTENERADAPTER_H

        #include <QScriptEngine>
        #include <QScriptValue>
        #include <QScriptContextInfo>
        #include <QDebug>

        
                #include "RFocusListenerAdapter.h"
            

        /**
         * \ingroup scripting_ecmaapi
         */
        class REcmaShellFocusListenerAdapter : public RFocusListenerAdapter {

        public:
      
    // Destructor:
    
            ~REcmaShellFocusListenerAdapter();
        static RFocusListenerAdapter* getSelf(const QString& fName, QScriptContext* context)
    ;static REcmaShellFocusListenerAdapter* getSelfShell(const QString& fName, QScriptContext* context)
    ;
    
    
      void updateFocus(
                RDocumentInterface * di
            );
        
    
  
        // methods of 1st level base class RFocusListener:
        

    // protected methods (only available for ECMA shell classes) (generated by xsl2xpp.xsl):
	QScriptValue __qtscript_self;
            };
            Q_DECLARE_METATYPE(REcmaShellFocusListenerAdapter*)
        
	#endif
    