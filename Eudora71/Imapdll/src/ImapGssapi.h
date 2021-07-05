// ImapGssapi.cpp: Header file for IMAP GSSAPI authenticator class.
//
// Copyright (c) 2002 by QUALCOMM, Incorporated
/* Copyright (c) 2016, Computer History Museum 
All rights reserved. 
Redistribution and use in source and binary forms, with or without modification, are permitted (subject to 
the limitations in the disclaimer below) provided that the following conditions are met: 
 * Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer. 
 * Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following 
   disclaimer in the documentation and/or other materials provided with the distribution. 
 * Neither the name of Computer History Museum nor the names of its contributors may be used to endorse or promote products 
   derived from this software without specific prior written permission. 
NO EXPRESS OR IMPLIED LICENSES TO ANY PARTY'S PATENT RIGHTS ARE GRANTED BY THIS LICENSE. THIS SOFTWARE IS PROVIDED BY THE 
COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE 
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES 
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS 
INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING 
NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH 
DAMAGE. */

//

#ifndef _IMAPGSSAPI_H_
#define _IMAPGSSAPI_H_

#include "MyTypes.h"
#include "exports.h"
#include "ImapDefs.h"
#include "Proto.h"
#include "mm.h"

#include "gssapi.h"


class CImapGssapi : public CGssapi
{
public:
	CImapGssapi(void *challenger,
				void *responder,
				void *s,
				LPCSTR pHost,
				LPCSTR pUser);

	virtual ~CImapGssapi();


// Internal methods:
protected:
	// Encapsulation of protocol specific functions.
	virtual CString		 GetDLLName();
	virtual CString		 GetServiceName();
	virtual void		*GetChallenge(unsigned long *lLength);
	virtual BOOL		 SendResponse(char *szResp, unsigned long lSize);
	virtual void		 AddLastErrorString(const char *szString);
};


long IMAPGssapiAuthenticator(void *challenger,
							 void *responder,
							 void *s,
							 char *szUser,
							 CString szHost);

#endif /* _IMAPGSSAPI_H_ */
