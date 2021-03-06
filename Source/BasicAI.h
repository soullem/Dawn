#ifndef __BASICAI_H
#define __BASICAI_H

#include <OgreMath.h>
#include "ActionType.h"
#include "MobStats.h"

class BasicAI
{
public:
	enum Behavior { AI_PATROLL };

	void setStats(MobStats *stats) { _stats = stats; }
	void setBehavior(BasicAI::Behavior behavior);

	void getNextAction(Action::Type *act, Action::Modifier *mod);

private:
	Behavior _behavior;
	MobStats *_stats;

};

#endif // __BASICAI_H