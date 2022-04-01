#ifndef RAIDER_H
#define RAIDER_H

class CharRole{};
class CharClass{};
class Raider
{
    public:
    Raider();
    Raider(CharRole,CharClass);
    ~Raider();


    private:

    CharRole char_role;
    CharClass char_class;



};




#endif