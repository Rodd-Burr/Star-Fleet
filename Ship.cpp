#include "Ship.h"


int		Ship::getCost()
{
	return cost;
}
void 	Ship::setCost(int c)
{
	cost = c;
}
int 	Ship::calculateCost(float)
{
	return cost = -1;
}

int 	Ship::getMinCrew()
{
	return minCrew;
}
void 	Ship::setMinCrew(int m)
{
	minCrew = m;
}

int 	Ship::getMaxCrew()
{
	return maxCrew;
}
void 	Ship::setMaxCrew(int m)
{
	maxCrew = m;
}

int 	Ship::setModifier(Modifier mod, bool val)
{
	modifiers[mod] = val;
    return 0;
}
bool 	Ship::getModifierIsActive(Modifier mod)
{
    return (modifiers[mod]);
}
int* 	Ship::getModifiers()
{
    return modifiers;
}

int 	Ship::getHullPointsMax()
{
    return hullPointsMax;
}
void 	Ship::setHullPointsMax(int n)
{
    hullPointsMax = n;
}

int 	Ship::getPowerCoreTotal()
{
    return powerCoreTot;
}					

void 	Ship::setPowerCoreTotal(int val)
{
    powerCoreTot = val;
}

Crewman* 	Ship::getCrewman(Station station)
{
    return crewmen[station];
}
void 	Ship::assignCrewman(Crewman* crew, Station stat)
{
    crewmen[stat] = crew;
}

string 	Ship::getName()
{
    return name;
}
void 	Ship::setName(string n)
{
    name = n;
}

float 	Ship::getTier()
{
    return tier;
}
void 	Ship::setTier(float f)
{
    tier = f;
}

int 	Ship::getSize()
{
    return size;
}
void 	Ship::setSize(int s)
{
    size = s;
}

int 	Ship::getSpeed()
{
    return speed;
}
void 	Ship::setSpeed(int val)
{
    speed = val;
}

Maneuverability 	Ship::getManeuverability()
{
    return maneuv;
}
void 	Ship::setManeuverability(Maneuverability m)
{
    maneuv = m;
}

float 	Ship::getDriftRating()
{
    return driftRating;
}
void 	Ship::setDriftRating(float d)
{
    driftRating = d;
}

int 	Ship::getArmourClass()
{
    return armourClass;
}
void 	Ship::setArmourClass(int ac)
{
    armourClass = ac;
}

int 	Ship::getTargetLock()
{
    return targetLock;
}
void 	Ship::setTargetLock(int tl)
{
    targetLock = tl;
}

int 	Ship::getDamageThreshold()
{
    return damageThreshold;
}
void 	Ship::setDamageThreshold(int dt)
{
    damageThreshold = dt;
}

string 	Ship::getSystems()
{
    string all_systems = "";
    for(int i = 0; i < systems->length(); i++)
    {
        all_systems += systems[i] + "\n";
    }
    return all_systems;
}
void 	Ship::addSystem(string s)
{
    systems->append(s);
}

string 	Ship::getExpansionBays()
{
    string all_expansions = "";
    for (int i = 0; i < expansionBays->length(); i++)
    {
        all_expansions += expansionBays[i] + "\n";
    }
    return all_expansions;
}
void 	Ship::addExpansionBay(string s)
{
    expansionBays->append(s);
}


int     Ship::getXpos()
{
    return x_pos;
}
void    Ship::setXpos(int x) 
{
    x_pos = x;
}

int     Ship::getYpos() 
{
    return y_pos;
}
void    Ship::setYpos(int y) 
{
    y_pos = y;
}

Orientation Ship::getOrientation() 
{
    return orientation;
}
void        Ship::setOrientation(Orientation o) 
{
    orientation = o;
}
string    Ship::toString()
{
    string manu;
    string sizeString = std::to_string(size);
    string speedString = std::to_string(speed);
    string tarlockString = std::to_string(targetLock);
    string dtString = std::to_string(damageThreshold);
    string ctString = std::to_string(criticalThreshold);
    string pctString = std::to_string(powerCoreTot);
    string pcaString = std::to_string(powerCoreAvl);
    string hpmString = std::to_string(hullPointsMax);
    string hpcString = std::to_string(hullPointsCur);
    string shieldString = "";
    for (int i=0; i<4; i++){ // builds shieldString with shieldTot array
	shieldString += " Shield " + std::to_string(i) 
	+ ": " + std::to_string(shieldCur[i]);
    }


    switch (maneuv){ // determine maneuverability to return
	case 0:
	    manu = "Clumsy";
	    break;
	case 1:
	    manu = "Poor";
	    break;
	case 3:
	    manu = "Average";
	    break;
	case 4:
	    manu = "Good";
	    break;
	case 5:
	    manu = "Perfect";
	    break;
	default:
	    manu = "ManeuvErr";
	    break;
    };

    return ("Name: " + name + " Speed: " + speedString  + " Maneuv: " + manu + 
	    " TargetLock: " + tarlockString + " DamageThold " + dtString +
	    " CritTHold: " + ctString + " PowerCoreAvl: " + pcaString +
	    " PowerCoreTot: " + pctString + " HullPointsCur: " + hpcString + 
	    " HullPointsMax: " + hpmString + "Shields:" + shieldString);
}
