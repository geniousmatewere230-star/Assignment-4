#include <iostream>
using namespace std;

class Basic{
public:    
    [span_35](start_span)static int num;[span_35](end_span)
    
    static void print(){        
        [span_36](start_span)cout << num << endl;[span_36](end_span)
    } 
};

// Definition and initialization of static member variable
[span_37](start_span)int Basic::num = 100;[span_37](end_span)

int main(){    
    [span_38](start_span)Basic::print();[span_38](end_span)
    [span_39](start_span)return 0;[span_39](end_span)
}
