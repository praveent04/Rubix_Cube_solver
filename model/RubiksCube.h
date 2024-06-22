//
// Created by PRAVEEN on 11-06-2024.
//
// base file
#ifndef RUBIX_RUBIKSCUBE_H
#define RUBIX_RUBIKSCUBE_H

#include "bits/stdc++.h"
using namespace std;

class RubiksCube {
public:

    enum class Color{ORANGE,RED,BLUE,WHITE,GREEN,YELLOW};

    enum class Face {UP,DOWN,LEFT,RIGHT,FRONT,BACK};

    enum class Move{
        U, UP, U2,
        D, DP, D2,
        L, LP, L2,
        R, RP, R2,
        F, FP, F2,
        B, BP, B2
    };

    virtual Color getColor(Face face, unsigned row, unsigned col) const =0;

    static char getColorLetter (Color color);

    virtual bool isSolved() const=0;

    static string getMove(Move ind);

    void print()const;

    vector<Move> RandomShuffle(unsigned  times);

    RubiksCube &move(Move ind);

    RubiksCube &invert(Move ind);


    /*
     * We will print the Rubik Cube in Planar format.
     *
     * Color wise:
     *
     *          W W W
     *          W W W
     *          W W W
     *
     *  G G G   R R R   B B B   O O O
     *  G G G   R R R   B B B   O O O
     *  G G G   R R R   B B B   O O O
     *
     *          Y Y Y
     *          Y Y Y
     *          Y Y Y
     *
     * * The sides:
     *    U
     *  L F R B
     *    D
     *
     * Row and Column flow:
     * rx -> row number
     * cx -> column number
     * bx -> both row and column number i.e same
     *
     *             b0 c1 c2
     *             r1  .  .
     *             r2  .  .
     *
     *  b0 c1 c2   b0 c1 c2   b0 c1 c2   b0 c1 c2
     *  r1  .  .   r1  .  .   r1  .  .   r1  .  .
     *  r2  .  .   r2  .  .   r2  .  .   r2  .  .
     *
     *             b0 c1 c2
     *             r1  .  .
     *             r2  .  .
     */

    /*
     * Rotational Moves on the Rubik Cubes
     * F, F’, F2,
     * U, U’, U2,
     * L, L’, L2,
     * D, D’, D2,
     * R, R’, R2,
     * B, B’, B2
     */

    virtual RubiksCube &u() = 0;

    virtual RubiksCube &up() = 0;

    virtual RubiksCube &u2() = 0;

    virtual RubiksCube &d() = 0;

    virtual RubiksCube &dp() = 0;

    virtual RubiksCube &d2() = 0;

    virtual RubiksCube &l() = 0;

    virtual RubiksCube &lp() = 0;

    virtual RubiksCube &l2() = 0;

    virtual RubiksCube &r() = 0;

    virtual RubiksCube &rp() = 0;

    virtual RubiksCube &r2() = 0;

    virtual RubiksCube &f() = 0;

    virtual RubiksCube &fp() = 0;

    virtual RubiksCube &f2() = 0;

    virtual RubiksCube &b() = 0;

    virtual RubiksCube &bp() = 0;

    virtual RubiksCube &b2() = 0;

    string getCornerColorString(uint8_t ind) const;

    uint8_t getCornerIndex(uint8_t ind) const;

    uint8_t getCornerOrientation(uint8_t ind) const;

};


#endif //RUBIX_RUBIKSCUBE_H
