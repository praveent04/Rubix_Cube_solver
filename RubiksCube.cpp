//
// Created by DELL on 11-06-2024.
//


#include "RubiksCube.h"

char RubiksCube::getColorLetter(RubiksCube::Color color) {
    switch (color) {
        case Color::ORANGE:
            return 'O';
        case Color::RED:
            return 'R';
        case Color::BLUE:
            return 'B';
        case Color::WHITE:
            return 'W';
        case Color::GREEN:
            return 'G';
        case Color::YELLOW:
            return 'Y';
    }
    return '?';
}

    string RubiksCube ::getMove(RubiksCube::Move ind) {
        switch(ind ){
            case Move::U:
                return "U";
            case Move::UP:
                return "U'";
            case Move::U2:
                return "U2";
            case Move::D:
                return "D";
            case Move::DP:
                return "D'";
            case Move::D2:
                return "D2";
            case Move::L:
                return "L";
            case Move::LP:
                return "L'";
            case Move::L2:
                return "L2";
            case Move::R:
                return "R";
            case Move::RP:
                return "R'";
            case Move::R2:
                return "R2";
            case Move::F:
                return "F";
            case Move::FP:
                return "F'";
            case Move::F2:
                return "F2";
            case Move::B:
                return "B";
            case Move::BP:
                return "B'";
            case Move::B2:
                return "B2";
        }
        return "";
    }

    RubiksCube &RubiksCube:: move(Move ind){
        switch (ind) {
            case Move:: U:
                return this->u();
            case Move:: UP:
                return this->up();
            case Move:: U2:
                return this->u2();
            case Move:: D:
                return this->d();
            case Move:: DP:
                return this->dp();
            case Move:: D2:
                return this->d2();
            case Move:: L:
                return this->l();
            case Move:: LP:
                return this->lp();
            case Move:: L2:
                return this->l2();
            case Move:: R:
                return this->r();
            case Move:: RP:
                return this->rp();
            case Move:: R2:
                return this->r2();
            case Move:: F:
                return this->f();
            case Move:: FP:
                return this->fp();
            case Move:: F2:
                return this->f2();
            case Move:: B:
                return this->b();
            case Move:: BP:
                return this->bp();
            case Move:: B2:
                return this->b2();
        }
        return *this;
}

RubiksCube &RubiksCube::invert(RubiksCube::Move ind) {
    switch (ind) {
        case Move::U:
            return this->up();
        case Move::UP:
            return this->u();
        case Move::U2:
            return this->u2();
        case Move::D:
            return this->dp();
        case Move::DP:
            return this->d();
        case Move::D2:
            return this->d2();
        case Move::L:
            return this->lp();
        case Move::LP:
            return this->l();
        case Move::L2:
            return this->l2();
        case Move::R:
            return this->rp();
        case Move::RP:
            return this->r();
        case Move::R2:
            return this->r2();
        case Move::F:
            return this->fp();
        case Move::FP:
            return this->f();
        case Move::F2:
            return this->f2();
        case Move::B:
            return this->bp();
        case Move::BP:
            return this->b();
        case Move::B2:
            return this->b2();
    }
    return *this;
}

void RubiksCube::print() const {

    cout<< "Rubik's Cube Planar Presentation";

    for(int row=0; row<3 ; row++) {
        for (unsigned int i = 0; i < 7; i++) cout << " ";
        for (int col = 0; col < 3; col++) {
            cout << getColorLetter(getColor(Face::UP, row, col)) << " ";
        }
        cout << endl;
    }
    cout<<endl;

    for(int row=0; row<3 ; row++){

        for(int col =0; col<3 ; col++){
            cout<<getColorLetter(getColor(Face:: LEFT, row,col))<<" ";
        }
        cout<<" ";

        for(int col =0; col<3 ; col++){
            cout<<getColorLetter(getColor(Face:: FRONT, row,col))<<" ";
        }
        cout<<" ";

        for(int col =0; col<3 ; col++){
            cout<<getColorLetter(getColor(Face:: RIGHT, row,col))<<" ";
        }
        cout<<" ";

        for(int col =0; col<3 ; col++){
            cout<<getColorLetter(getColor(Face:: BACK, row,col))<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    for(int row=0; row<3 ; row++) {
        for (unsigned int i = 0; i < 7; i++) cout << " ";
        for (int col = 0; col < 3; col++) {
            cout << getColorLetter(getColor(Face::DOWN, row, col)) << " ";
        }
        cout << endl;
    }
    cout<<endl;
}

vector<RubiksCube::Move> RubiksCube::RandomShuffle(unsigned int times) {

    vector<Move> performed_moves;


    srand(time(0));
    for(unsigned int i =0;i<times ; i++){
        unsigned selectMove = (rand()%18);
        performed_moves.push_back(static_cast<Move>(selectMove));
        this->move(static_cast<Move>(selectMove));
    }
    return performed_moves;

}
string RubiksCube::getCornerColorString(uint8_t ind) const {
    string str ="";
    switch (ind) {
        //         UFR
        case 0:
            str += getColorLetter(getColor(Face::UP, 2, 2));
            str += getColorLetter(getColor(Face::FRONT, 0, 2));
            str += getColorLetter(getColor(Face::RIGHT, 0, 0));
            break;
             //            UFL
        case 1:
            str += getColorLetter(getColor(Face::UP, 2, 0));
            str += getColorLetter(getColor(Face::FRONT, 0, 0));
            str += getColorLetter(getColor(Face::LEFT, 0, 2));
            break;
            //            UBL
        case 2:
            str += getColorLetter(getColor(Face::UP, 0, 0));
            str += getColorLetter(getColor(Face::BACK, 0, 2));
            str += getColorLetter(getColor(Face::LEFT, 0, 0));
            break;
            //            UBR
        case 3:
            str += getColorLetter(getColor(Face::UP, 0, 2));
            str += getColorLetter(getColor(Face::BACK, 0, 0));
            str += getColorLetter(getColor(Face::RIGHT, 0, 2));
            break;
            //            DFR
        case 4:
            str += getColorLetter(getColor(Face::DOWN, 0, 2));
            str += getColorLetter(getColor(Face::FRONT, 2, 2));
            str += getColorLetter(getColor(Face::RIGHT, 2, 0));
            break;
            //            DFL
        case 5:
            str += getColorLetter(getColor(Face::DOWN, 0, 0));
            str += getColorLetter(getColor(Face::FRONT, 2, 0));
            str += getColorLetter(getColor(Face::LEFT, 2, 2));
            break;
            //            DBR
        case 6:
            str += getColorLetter(getColor(Face::DOWN, 2, 2));
            str += getColorLetter(getColor(Face::BACK, 2, 0));
            str += getColorLetter(getColor(Face::RIGHT, 2, 2));
            break;
            //            DBL
        case 7:
            str += getColorLetter(getColor(Face::DOWN, 2, 0));
            str += getColorLetter(getColor(Face::BACK, 2, 2));
            str += getColorLetter(getColor(Face::LEFT, 2, 0));
            break;
    }
    return str;
}
/* The getCornerIndex function determines a unique index for a given corner of the Rubik's Cube based on the colors of its stickers. This index is created by interpreting the colors as bits in an 8-bit integer. The function effectively encodes the color information into a single byte.*/

uint8_t RubiksCube::getCornerIndex(uint8_t ind) const {

    string corner = getCornerColorString(ind);

    uint8_t result =0;

    for (auto c: corner) {
        if (c != 'B' && c != 'G') continue;
        if (c == 'G') result = result | (1 << 0);
    }

    for (auto c: corner) {
        if (c != 'R' && c != 'O') continue;
        if (c == 'O') result = result | (1 << 1);
    }
    for(auto c: corner){
        if(c!='W' && c!= 'Y') continue;
        if(c == 'Y') result = result |(1<<2);
    }
    return result;
}

uint8_t RubiksCube::getCornerOrientation(uint8_t ind) const {
    string corner = getCornerColorString(ind);
    string act_str ="";

    for(auto c: corner){
        if(c!='Y' && c != 'W') continue;
        act_str.push_back(c);
    }

    if(corner[1]== act_str[0])
        return 1;
    else if( corner[2]== act_str[0])
        return 2;
    else
        return 0;
}