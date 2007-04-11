/* @(#) $Id$ */

/* Copyright (C) 2005-2006 Daniel B. Cid <dcid@ossec.net>
 * All rights reserved.
 *
 * This program is a free software; you can redistribute it
 * and/or modify it under the terms of the GNU General Public
 * License (version 2) as published by the FSF - Free Software
 * Foundation
 */
       
       
#ifndef _MAILIST__H
#define _MAILIST__H


/* Events List structure */
typedef struct _MailNode
{
    MailMsg *mail;
    struct _MailNode *next;
    struct _MailNode *prev;
}MailNode;


/* Add an email to the list  */
void OS_AddMailtoList(MailMsg *ml);

/* Return the last event from the Event list 
 * removing it from there
 */
MailNode *OS_PopLastMail();

/* Returns a pointer to the last email, not removing it */
MailNode *OS_CheckLastMail();

/* Create the mail list. Maxsize must be specified */
void OS_CreateMailList(int maxsize);

/* Free an email node */
void FreeMail(MailNode *ml);

/* Free email msg */
void FreeMailMsg(MailMsg *ml);

#endif
