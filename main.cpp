#include <QApplication>
#include "Widget.h"

int main(int argv, char **args) {

   QApplication app(argv, args); 
   
   Widget w;
   w.show();
  
   return app.exec();

}