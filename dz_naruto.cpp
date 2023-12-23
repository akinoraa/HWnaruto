#include <iostream>
using namespace std;

class ChakraType
{
public:
    virtual void UseChakraType() const = 0;
};

class WindChakra : public ChakraType
{
public:
    void UseChakraType() const
    {
        cout << "Wind Chakra\n";
    }
};

class LightningChakra : public ChakraType
{
public:
    void UseChakraType() const
    {
        cout << "Lightning Chakra\n";
    }
};

class EarthChakra : public ChakraType
{
public:
    void UseChakraType() const
    {
        cout << "Earth Chakra\n";
    }
};

class Jutsu
{
public:
    virtual void UseJutsu() const = 0;
};

class Rasengan : public Jutsu
{
public:
    void UseJutsu() const
    {
        cout << "Rasengan\n";
    }
};

class Chidori : public Jutsu
{
public:
    void UseJutsu() const
    {
        cout << "Chidori\n";
    }
};

class Raikiri : public Jutsu
{
public:
    void UseJutsu() const
    {
        cout << "Raikiri\n";
    }
};


class MedicalTechnique : public Jutsu
{
public:
    void UseJutsu() const
    {
        cout << "Medical Technique\n";
    }
};

class Village
{
public:
    virtual void PrintVillage() const = 0;
};

class Konoha : public Village
{
public:
    void PrintVillage() const
    {
        cout << "Konoha\n";
    }
};

class Kakashi : public Konoha, public LightningChakra, public Raikiri
{
public:
    void UseChakraType() const
    {
        LightningChakra::UseChakraType();
    }

    void UseJutsu() const
    {
        Raikiri::UseJutsu();
    }
};

class Naruto : public Konoha, public WindChakra, public Rasengan
{
public:
    void UseChakraType() const
    {
        WindChakra::UseChakraType();
    }

    void UseJutsu() const
    {
        Rasengan::UseJutsu();
    }
};

class Sasuke : public Konoha, public LightningChakra, public Chidori
{
public:
    void UseChakraType() const
    {
        LightningChakra::UseChakraType();
    }

    void UseJutsu() const
    {
        Chidori::UseJutsu();
    }
};

class Sakura : public Konoha, public EarthChakra, public MedicalTechnique
{
public:
    void UseChakraType() const
    {
        EarthChakra::UseChakraType();
    }

    void UseJutsu() const
    {
        MedicalTechnique::UseJutsu();
    }
};

int main()
{
    setlocale(LC_ALL, "");

    Naruto naruto;
    naruto.PrintVillage();
    naruto.UseChakraType();
    naruto.UseJutsu();

    cout << "\n";

    Sasuke sasuke;
    sasuke.PrintVillage();
    sasuke.UseChakraType();
    sasuke.UseJutsu();

    cout << "\n";

    Sakura sakura;
    sakura.PrintVillage();
    sakura.UseChakraType();
    sakura.UseJutsu();

    cout << "\n";

    Kakashi kakashi;
    kakashi.PrintVillage();
    kakashi.UseChakraType();
    kakashi.UseJutsu();
}