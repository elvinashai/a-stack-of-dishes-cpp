#pragma once
#include "dish.hpp"
#include <iostream>
using namespace std;

class DishStack {
private:
    static const int MAX_SIZE = 5;
    Dish arr[MAX_SIZE];
    int top;

public:
    DishStack() {
        top = -1;
    }

    void push(Dish d) {
        if (top == MAX_SIZE - 1) {
            cout << "Stack is full.\n";
            return;
        }
        arr[++top] = d;
    }

    Dish pop() {
        if (top == -1) {
            cout << "Stack is empty.\n";
            return Dish("Empty Dish");
        }
        return arr[top--];
    }

    Dish peek() {
        if (top == -1) {
            cout << "Stack is empty.\n";
            return Dish("Empty Dish");
        }
        return arr[top];
    }

    int size() {
        return top + 1;
    }
};
