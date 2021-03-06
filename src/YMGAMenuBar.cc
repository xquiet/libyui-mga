/*
  Copyright 2020 by Angelo Naselli <anaselli at linux dot it>

  This library is free software; you can redistribute it and/or modify
  it under the terms of the GNU Lesser General Public License as
  published by the Free Software Foundation; either version 2.1 of the
  License, or (at your option) version 3.0 of the License. This library
  is distributed in the hope that it will be useful, but WITHOUT ANY
  WARRANTY; without even the implied warranty of MERCHANTABILITY or
  FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public
  License for more details. You should have received a copy of the GNU
  Lesser General Public License along with this library; if not, write
  to the Free Software Foundation, Inc., 51 Franklin Street, Fifth
  Floor, Boston, MA 02110-1301 USA
*/


/*-/

  File:         YMGAMenuBar.cc

  Author:       Angelo Naselli <anaselli@linux.it>

/-*/

#define YUILogComponent "mga-ui"
#include <yui/YUILog.h>

#include <yui/YUISymbols.h>
#include "YMGAMenuBar.h"
#include "YMGAMenuItem.h"


YMGAMenuBar::YMGAMenuBar ( YWidget* parent )
  :YSelectionWidget ( parent,
                      "",     // label
                      true ) // enforceSingleSelection
{
  setDefaultStretchable ( YD_HORIZ, true );
  setDefaultStretchable ( YD_VERT,  true );
}


YMGAMenuBar::~YMGAMenuBar()
{
}

void YMGAMenuBar::enableItem(YItem* menu_item, bool enable)
{
  YMGAMenuItem * item = dynamic_cast<YMGAMenuItem *>(menu_item);
  YUI_CHECK_NEW ( item );

  item->enable(enable);
}

void YMGAMenuBar::hideItem(YItem* menu_item, bool invisible)
{
  YMGAMenuItem * item = dynamic_cast<YMGAMenuItem *>(menu_item);
  YUI_CHECK_NEW ( item );

  item->hide(invisible);
}
