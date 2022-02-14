#include "Warlock.hpp"
#include "Fwoosh.hpp"
#include "Firewall.hpp"
#include "Polymorph.hpp"
#include "Dummy.hpp"
#include "BrickWall.hpp"


int main()
{
  Warlock richard("Richard", "foo");
  richard.setTitle("Hello, I'm Richard the Warlock!");
  BrickWall model1;

  Polymorph* polymorph = new Polymorph();
  
  //TargetGenerator tarGen;
  Dummy bob;

  //tarGen.learnTargetType(&model1);
  richard.learnSpell(polymorph);

  Firewall* firewall = new Firewall();

  richard.learnSpell(firewall);

  //ATarget* wall = tarGen.createTarget("Inconspicuous Red-brick Wall");
  richard.introduce();
  richard.launchSpell("Polymorph", bob);
  richard.launchSpell("Fireball", bob);
}