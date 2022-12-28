# Kollavarsham : Arduino  library  for converting Gregorian date to Malayalam Kollavarsham calendar date

## Library setup

* Mac users :  Create a directory named Kollavarsham inside ~/Documents/Arduino/libraries/ . Then copy the file [KollaVarsham.h](../master/src/KollaVarsham.h) into this newly created directory
* Windows users : Create a directory named Kollavarsham inside My Documents\Arduino\libraries\ . Then copy the file  [KollaVarsham.h](../master/src/KollaVarsham.h) into this newly created directory
* Linux users : Create a directory named Kollavarsham inside ~/Arduino/libraries/ . Then copy the file  [Kollavarsham.h](../master/src/Kollavarsham.h) into this newly created directory


## Usage

      # <indlcude> KollaVarsham.h         // include library in your code
      KollaVarsham my_kv;                 // create an object named my_kv from KollaVarsham class
      my_kv.fromGregorian(yyyy,mm,dd);    // invoke the interface to calculate Kollavarsham date with given date in integer form
      int kyyyy = my_kv.getYear();        // get Kollavarsham Year
      int kmm = my_kv.getMonth();         // get Kollavarsham Month
      int kdd = my_kv.getDay();           // get Kollavarsham Date

## Month

The library returns month between from 1 through 12 . Corresponding month names are
_"Chingam" , "Kanni", "Thulaam", "Vrishchikam", "Dhanu", "Makaram", "Kumbham", "Meenam", "Medam", "Idavam", "Mithunam", "Karkkidakam"}_

Refer to [example](example) for a sample code.
