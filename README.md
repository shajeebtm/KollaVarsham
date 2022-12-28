# KollaVarsham : Arduino  library  for converting Gregorian date to Malayalam Kollavarsham calendar date

## Library setup

* Mac users :  Create a directory named KollaVarsham inside ~/Documents/Arduino/libraries/ . Then copy the file [KollaVarsham.h](../master/src/KollaVarsham.h) into this newly created directory
* Windows users : Create a directory named KollaVarsham inside My Documents\Arduino\libraries\ . Then copy the file  [KollaVarsham.h](../master/src/KollaVarsham.h) into this newly created directory
* Linux users : Create a directory named KollaVarsham inside ~/Arduino/libraries/ . Then copy the file  [Kollavarsham.h](../master/src/KollaVarsham.h) into this newly created directory


## Usage

      # <indlcude> KollaVarsham.h         // include library in your code
      KollaVarsham my_kv;                 // create an object from KollaVarsham class
      my_kv.fromGregorian(yyyy,mm,dd);    // invoke the interface to calculate Kollavarsham date with given date in integer form
      int kyyyy = my_kv.getYear();        // get Kollavarsham Year
      int kmm = my_kv.getMonth();         // get Kollavarsham Month
      int kdd = my_kv.getDay();           // get Kollavarsham Date

## Month

The library returns month number between 1 through 12 . Corresponding month names are

_"Chingam" , "Kanni", "Thulaam", "Vrishchikam", "Dhanu", "Makaram", "Kumbham", "Meenam", "Medam", "Idavam", "Mithunam", "Karkkidakam"_

## Example
Refer to [example](example) for a sample code.


### Reference
This arduino  implementation of the Kollavarsham is a port of the Perl implementation of the Pancanga (Hindu Almanac) by M. Fushimi and M. Yano which is documented at following locations                                  
- _http://www.cc.kyoto-su.ac.jp/~yanom/pancanga/message314.html_             
- _http://www.cc.kyoto-su.ac.jp/~yanom/sanskrit/pancanga/pancanga3.14_          
                                                          
In addition I would like to extend my sincere thanks to kollavarsham calendar team                                                               - -
- _https://github.com/kollavarsham/kollavarsham-js_
      
Please refer https://en.wikipedia.org/wiki/Malayalam_calendar for details of the Malayalam Kollavarsham calendar    
