#include <stdio.h>
#include "table.h"

#define TABLENAME TABLE_EXEC_SUCCESS

int main()
{
	table_init();
	char *tbl_exec_succ;
	int tbl_exec_succ_len = 1;
	table_unlock_val(TABLENAME);
    tbl_exec_succ = table_retrieve_val(TABLENAME, &tbl_exec_succ_len);

    /*
	table_unlock_val(TABLE_CNC_PORT);
   	uint16_t fuck = *((port_t *)table_retrieve_val(TABLE_CNC_PORT, NULL));
    table_lock_val(TABLE_CNC_PORT);
    */

    printf("\n\r[%s]\n\r", tbl_exec_succ);
    //printf("\n\r[%d]\n\r", fuck);
    table_lock_val(TABLENAME);
}