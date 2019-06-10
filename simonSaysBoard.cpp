#include "simonSaysBoard.h"

using namespace std;

void PrintBoard(char color){
    
    if (color == 'A'){
        cout<<"   RRRRRRRRRRR    |     GGGGGGGGG    "<<endl;
        cout<<"   RRR      RRR   |    GGG           "<<endl;
        cout<<"   RRR       RRR  |   GGG            "<<endl;
        cout<<"   RRR      RRR   |   GGG            "<<endl;
        cout<<"   RRRRRRRRRRR    |   GGG     GGGGG  "<<endl;
        cout<<"   RRR      RRR   |   GGG        GGG "<<endl;
        cout<<"   RRR       RRR  |   GGG        GGG "<<endl;
        cout<<"   RRR        RRR |    GGG       GGG "<<endl;
        cout<<"   RRR        RRR |      GGGGGGGGGG  "<<endl;
        cout<<"-------------------------------------"<<endl;
        cout<<"   RRRRRRRRRRR    |    YYY     YYY   "<<endl;
        cout<<"   RRR      RRR   |     YYY   YYY    "<<endl;
        cout<<"   RRR       RRR  |      YYY YYY     "<<endl;
        cout<<"   RRR      RRR   |       YY YY      "<<endl;
        cout<<"   RRRRRRRRRRR    |        YYY       "<<endl;
        cout<<"   RRR      RRR   |        YYY       "<<endl;
        cout<<"   RRR       RRR  |        YYY       "<<endl;
        cout<<"   RRR      RRR   |        YYY       "<<endl;
        cout<<"   BBBBBBBBBBB    |        YYY       "<<endl;
        cout<<endl;
    }
    
    else if (color == 'R'){
        cout<<"   RRRRRRRRRRR    |                  "<<endl;
        cout<<"   RRR      RRR   |                  "<<endl;
        cout<<"   RRR       RRR  |                  "<<endl;
        cout<<"   RRR      RRR   |                  "<<endl;
        cout<<"   RRRRRRRRRRR    |                  "<<endl;
        cout<<"   RRR      RRR   |                  "<<endl;
        cout<<"   RRR       RRR  |                  "<<endl;
        cout<<"   RRR        RRR |                  "<<endl;
        cout<<"   RRR        RRR |                  "<<endl;
        cout<<"-------------------------------------"<<endl;
        cout<<"                  |                  "<<endl;
        cout<<"                  |                  "<<endl;
        cout<<"                  |                  "<<endl;
        cout<<"                  |                  "<<endl;
        cout<<"                  |                  "<<endl;
        cout<<"                  |                  "<<endl;
        cout<<"                  |                  "<<endl;
        cout<<"                  |                  "<<endl;
        cout<<"                  |                  "<<endl;
        cout<<endl;
    }
    
    else if (color == 'G'){
        cout<<"                  |     GGGGGGGGG    "<<endl;
        cout<<"                  |    GGG           "<<endl;
        cout<<"                  |   GGG            "<<endl;
        cout<<"                  |   GGG            "<<endl;
        cout<<"                  |   GGG     GGGGG  "<<endl;
        cout<<"                  |   GGG        GGG "<<endl;
        cout<<"                  |   GGG        GGG "<<endl;
        cout<<"                  |    GGG       GGG "<<endl;
        cout<<"                  |      GGGGGGGGGG  "<<endl;
        cout<<"-------------------------------------"<<endl;
        cout<<"                  |                  "<<endl;
        cout<<"                  |                  "<<endl;
        cout<<"                  |                  "<<endl;
        cout<<"                  |                  "<<endl;
        cout<<"                  |                  "<<endl;
        cout<<"                  |                  "<<endl;
        cout<<"                  |                  "<<endl;
        cout<<"                  |                  "<<endl;
        cout<<"                  |                  "<<endl;
    }
    
    else if(color == 'Y'){
        cout<<"                  |                  "<<endl;
        cout<<"                  |                  "<<endl;
        cout<<"                  |                  "<<endl;
        cout<<"                  |                  "<<endl;
        cout<<"                  |                  "<<endl;
        cout<<"                  |                  "<<endl;
        cout<<"                  |                  "<<endl;
        cout<<"                  |                  "<<endl;
        cout<<"                  |                  "<<endl;
        cout<<"-------------------------------------"<<endl;
        cout<<"                  |    YYY     YYY   "<<endl;
        cout<<"                  |     YYY   YYY    "<<endl;
        cout<<"                  |      YYY YYY     "<<endl;
        cout<<"                  |       YY YY      "<<endl;
        cout<<"                  |        YYY       "<<endl;
        cout<<"                  |        YYY       "<<endl;
        cout<<"                  |        YYY       "<<endl;
        cout<<"                  |        YYY       "<<endl;
        cout<<"                  |        YYY       "<<endl;
        cout<<endl;
    }
    else if(color == 'B'){
        cout<<"                  |                  "<<endl;
        cout<<"                  |                  "<<endl;
        cout<<"                  |                  "<<endl;
        cout<<"                  |                  "<<endl;
        cout<<"                  |                  "<<endl;
        cout<<"                  |                  "<<endl;
        cout<<"                  |                  "<<endl;
        cout<<"                  |                  "<<endl;
        cout<<"                  |                  "<<endl;
        cout<<"-------------------------------------"<<endl;
        cout<<"   RRRRRRRRRRR    |                  "<<endl;
        cout<<"   RRR      RRR   |                  "<<endl;
        cout<<"   RRR       RRR  |                  "<<endl;
        cout<<"   RRR      RRR   |                  "<<endl;
        cout<<"   RRRRRRRRRRR    |                  "<<endl;
        cout<<"   RRR      RRR   |                  "<<endl;
        cout<<"   RRR       RRR  |                  "<<endl;
        cout<<"   RRR      RRR   |                  "<<endl;
        cout<<"   BBBBBBBBBBB    |                  "<<endl;
        cout<<endl;
    }
}