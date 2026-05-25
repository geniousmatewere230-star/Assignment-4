#include <iostream>
using namespace std;

class Test{
public:    
    Test(){        
        [span_32](start_span)cout << "Constructor Called" << endl;[span_32](end_span)
    } 
};

int main(){    
    [span_33](start_span)Test t;[span_33](end_span)
    [span_34](start_span)return 0;[span_34](end_span)
}
