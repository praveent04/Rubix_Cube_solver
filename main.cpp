
#include <bits/stdc++.h>
#include "Model/RubiksCube3dArray.cpp"
#include "Model/RubiksCube1dArray.cpp"


using namespace std;

int main() {
    RubiksCube3dArray object3DArray;
    RubiksCube1dArray object1dArray;


    object3DArray.print();

    if (object3DArray.isSolved()) cout << "SOLVED\n\n";
    else cout << "NOT SOLVED\n\n";

    if (object1dArray.isSolved()) cout << "SOLVED\n\n";
    else cout << "NOT SOLVED\n\n";




    object3DArray.u();
    object1dArray.u();

    object3DArray.print();
    object1dArray.print();


    object3DArray.l();
    object1dArray.l();

    object3DArray.print();
    object1dArray.print();

    object3DArray.f();
    object1dArray.f();

    object3DArray.print();
    object1dArray.print();


    object3DArray.r();
    object1dArray.r();

    object3DArray.print();
    object1dArray.print();


    object3DArray.b();
    object1dArray.b();

    object3DArray.print();
    object1dArray.print();


    object3DArray.d();
    object1dArray.d();

    object3DArray.print();
    object1dArray.print();

    if (object3DArray.isSolved()) cout << "SOLVED\n\n";
    else cout << "NOT SOLVED\n\n";

    if (object1dArray.isSolved()) cout << "SOLVED\n\n";
    else cout << "NOT SOLVED\n\n";



    object3DArray.dp();
    object1dArray.dp();

    object3DArray.print();
    object1dArray.print();


    object3DArray.bp();
    object1dArray.bp();

    object3DArray.print();
    object1dArray.print();


    object3DArray.rp();
    object1dArray.rp();

    object3DArray.print();
    object1dArray.print();


    object3DArray.fp();
    object1dArray.fp();

    object3DArray.print();
    object1dArray.print();


    object3DArray.lp();
    object1dArray.lp();

    object3DArray.print();
    object1dArray.print();


    object3DArray.up();
    object1dArray.up();

    object3DArray.print();
    object1dArray.print();

    if (object3DArray.isSolved()) cout << "SOLVED\n\n";
    else cout << "NOT SOLVED\n\n";

    if (object1dArray.isSolved()) cout << "SOLVED\n\n";
    else cout << "NOT SOLVED\n\n";


    return 0;
}