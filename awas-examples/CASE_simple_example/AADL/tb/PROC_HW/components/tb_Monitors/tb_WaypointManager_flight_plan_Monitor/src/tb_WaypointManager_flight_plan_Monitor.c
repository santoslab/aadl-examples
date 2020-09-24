/**************************************************************************
  Copyright (c) 2013-2016 Rockwell Collins and the University of
  Minnesota. Developed with the sponsorship of the Defense Advanced
  Research Projects Agency (DARPA).

  Permission is hereby granted, free of charge, to any person
  obtaining a copy of this data, including any software or models
  in source or binary form, as well as any drawings,
  specifications, and documentation (collectively "the Data"), to
  deal in the Data without restriction, including without
  limitation the rights to use, copy, modify, merge, publish,
  distribute, sublicense, and/or sell copies of the Data, and to
  permit persons to whom the Data is furnished to do so, subject to
  the following conditions:

  The above copyright notice and this permission notice shall be
  included in all copies or substantial portions of the Data.

  THE DATA IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
  OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS, SPONSORS,
  DEVELOPERS, CONTRIBUTORS, OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
  CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF
  CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
  CONNECTION WITH THE DATA OR THE USE OR OTHER DEALINGS IN THE
  DATA.
 **************************************************************************/

/**************************************************************************

  ***AUTOGENERATED CODE: DO NOT MODIFY***

  Implementing a Monitor of type SW__Mission_Impl. The input port that will be 
  calling dequeue and receiving notifications 
  is tb_WaypointManager_flight_plan. The output port set follows:

    c.sourcePort


 **************************************************************************/

#include <stdio.h>
#include "../../../../include/tb_PROC_HW_types.h"
#include "../include/tb_WaypointManager_flight_plan_Monitor.h"

int mon_get_sender_id(void);
int monsig_emit(void);

static SW__Mission_Impl contents;

bool mon_read(SW__Mission_Impl * m) {
  if (mon_get_sender_id() != TB_MONITOR_READ_ACCESS) {
    #ifdef CONFIG_APP_PROC_HW_TB_DEBUG
    fprintf(stderr, "Monitor tb_WaypointManager_flight_plan: attempt to read without permission\n");
    #endif // CONFIG_APP_PROC_HW_TB_DEBUG
    return false;
  } else {
    *m = contents;
    return true;
  }
}

bool mon_write(const SW__Mission_Impl * m) {
  if (mon_get_sender_id() != TB_MONITOR_WRITE_ACCESS) {
    #ifdef CONFIG_APP_PROC_HW_TB_DEBUG
    fprintf(stderr, "Monitor tb_WaypointManager_flight_plan: attempt to write without permission\n");
    #endif // CONFIG_APP_PROC_HW_TB_DEBUG
    return false;
  } else {
    contents = *m;
    monsig_emit();
    return true;
  }
}
