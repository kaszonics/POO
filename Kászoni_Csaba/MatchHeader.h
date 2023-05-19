
#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Collections::Generic;

public ref class Match
{
public:
    property int Round;
    property int Court;
    property String^ TeamHome;
    property String^ TeamAway;

    // Constructor
    Match(int round, int court, String^ teamHome, String^ teamAway)
    {
        Round = round;
        Court = court;
        TeamHome = teamHome;
        TeamAway = teamAway;
    }

    // Destructor
    ~Match()
    {

    }
};

public ref class Byes
{
private:
    int round;
    String^ team;

public:
    // Constructor
    Byes(int round, String^ team)
    {
        this->round = round;
        this->team = team;
        Console::WriteLine("Byes object created");
    }

    // Destructor
    ~Byes()
    {
        Console::WriteLine("Byes object destroyed");
    }

    // Properties
    property int Round
    {
        int get() { return round; }
        void set(int value) { round = value; }
    }

    property String^ Team
    {
        String^ get() { return team; }
        void set(String^ value) { team = value; }
    }
};