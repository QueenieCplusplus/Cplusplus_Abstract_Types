# Cplusplus_Abstract_Types
與具象型別的類別相對，稱為抽象型別的類別。

抽象型別跟使用者的實作細節完全隔離開來，比較接近介面的概念。

       Interface >> Abstract Class >>  Concret Class >> Instance Object
       
                     >> 越往右邊，內部表述實作更具體。
                     
                     >> 越往左邊，越是需要捨棄成員變數。
   
 由於不清楚抽象類別中內部表述的內容，所以不會知道所需要的空間大小，故需要在自由空間中配置出物件，並且透過 ref 參考或是指標 * 來 access 這些物件。
                     
