#include "Item.h"
//Kind of equippable
enum Kind
{
	WEAPON,
	HELM,
	CHEST,
	GLOVES,
	SHOES
};
class Equippable : public Item {
public:
	//Constructor
	Equippable();

	//Destructor
	~Equippable();

	//Returns the kind of item this is.
	Kind getKind();

	//Returns strength of the given item
	Element getStrength();

	//Returns the weakness of the given item.
	Element getWeakness();

	//Returns the range of the given item.
	Range getRange();

protected:
	Stats *bonus;
	Kind kind;
	Range range;
	Element strength; // does the multiplier cover this?
	Element weakness; // does the multiplier cover this?
	vector<Ability> abilities;
	//Includes some sort of indication as to which sprite to use
};