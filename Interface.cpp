// 2019, 11/24, 19:00, by Queenie
// class
// abstract class
// pure interface
// polymorphic types
// 擁有虛擬運算子和虛擬函數，卻不知道哪一型別提供實作體，故稱為多型型別。
// 擁有抽象函數的類別稱為『抽象類別』。

// 如要使用者使用此介面
// 需要有實作出 operator[]()
// 也需要實作出 size()
// 方才能定義此介面的物件！

#include <iostream>

class ContainerQueen {

    public:
        //  使用 virtual 純虛擬
        //  功能是：日後可能會衍生類別 derived class 中被重新定義。
        //  virtual 和 ＝０ 是種虛擬語法。
        virtual int& operator[](float) = 0;
        virtual int size() const = 0;

        // 解構式釋放資源。
        virtual ~ContainerQueen() {}

}; // 類別需要以 ; 結尾

// 需要運用 參照
// 此方法的參數是某實作
void utilizeCQ(ContainerQueen& cq) {

    const int sz = cq.size();

    for (int i=0; i<sz; ++i)
        std::cout << cq[i] << '\n';

}

// 繼承關係
// 實作由上述介面要求的函數
// 此衍生型別將定義成具象型別
// ContainerPoupou 實作了| is subtype of | is derived from ContainerQueen
// 利用改寫方法 override 成員函數
class ContainerPoupou: public ContainerQueen {

  public:
    // 從基礎類別衍生出的子類別
    ContainerPoupou(int i){};
    ~ContainerPoupou(){};

    //覆寫方法
    int& operator[](float f) { };
    int size() const { };
    
};

void miaoPou() {

    ContainerPoupou cp(9);
    // utilizeCQ(ContainerQueen&) 其實不認識 ContainerPoupou
    // utilizeCQ 只認得 ContainerQueen
    // 但可以塞入物件
    // 所以上行實作出可供他使用的物件
    utilizeCQ(cp);

}

// _main implicits entry/ start for main executable for arch x86_64
int main() {

    miaoPou();
    return 0;

}