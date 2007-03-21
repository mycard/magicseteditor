//+----------------------------------------------------------------------------+
//| Description:  Magic Set Editor - Program to make Magic (tm) cards          |
//| Copyright:    (C) 2001 - 2006 Twan van Laarhoven                           |
//| License:      GNU General Public License 2 or later (see file COPYING)     |
//+----------------------------------------------------------------------------+

#ifndef HEADER_RENDER_VALUE_MULTIPLE_CHOICE
#define HEADER_RENDER_VALUE_MULTIPLE_CHOICE

// ----------------------------------------------------------------------------- : Includes

#include <util/prec.hpp>
#include <render/value/viewer.hpp>
#include <data/field/multiple_choice.hpp>

// ----------------------------------------------------------------------------- : MultipleChoiceValueViewer

/// Viewer that displays a multiple choice value
class MultipleChoiceValueViewer : public ValueViewer {
  public:
	DECLARE_VALUE_VIEWER(MultipleChoice) : ValueViewer(parent,style) {}
	
	virtual void draw(RotatedDC& dc);
  private:
	void drawChoice(RotatedDC& dc, RealPoint& pos, const String& choice, bool active = true);
};

// ----------------------------------------------------------------------------- : EOF
#endif
