
// Refer https://github.com/shajeebtm/KollaVarsham for details

#include <KollaVarsham.h>

void setup() {
  Serial.begin(115200);
  print_kollavarsham();
}

void loop() {
  // put your main code here, to run repeatedly:

}

void print_kollavarsham(){
  //Serial.println("Starting");
  
  KollaVarsham my_kv;
  
  int yyyy=2021;
  int mm=9;
  int dd=1;
  Serial.print("Gregorian date    : Year = "); Serial.print (yyyy) ; 
  Serial.print(" , Month = "); Serial.print (mm) ;
  Serial.print(" , Day  = "); Serial.println (dd) ;

  int kyyyy = my_kv.getYear();
  int kmm = my_kv.getMonth();
  int kdd = my_kv.getDay();
  
  
  my_kv.fromGregorian(yyyy,mm,dd);
  kyyyy = my_kv.getYear();
  kmm = my_kv.getMonth();
  kdd = my_kv.getDay();
  
  Serial.print("Kollavarsham date : Year = "); Serial.print (kyyyy) ; 
  Serial.print(" , Month = "); Serial.print (kmm) ;
  Serial.print(" , Day = "); Serial.println (kdd) ;

}
 
