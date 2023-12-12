//
// Created by Rostyslav on 12.12.2023.
//

#ifndef UNIT_H
#define UNIT_H
#include <string>

class GameBoard;

class Unit {
public:
    std::string id;
    int hp;
    int posX, posY; // Position
    int maxMove, maxStep; // Movement capabilities
    bool isDeadInside;
    int damage;
    Unit(const std::string& id, int hp, int posX, int posY, int maxMove, int maxStep, int damage)
        : id(id), hp(hp), posX(posX), posY(posY), maxMove(maxMove), maxStep(maxStep), isDeadInside(false), damage(damage) {}

    virtual ~Unit() = default;

    virtual void move(int x, int y, GameBoard* board) = 0; // Pure virtual function for movement
    virtual void attack(GameBoard* board) = 0; // Pure virtual function for attack
    virtual std::string getType() const = 0;
};




#endif //UNIT_H
