/*
Copyright (c) 2017, Stephanie Wehner and Axel Dahlberg
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
1. Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.
2. Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.
3. All advertising materials mentioning features or use of this software
   must display the following acknowledgement:
   This product includes software developed by Stephanie Wehner, QuTech.
4. Neither the name of the QuTech organization nor the
   names of its contributors may be used to endorse or promote products
   derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDER ''AS IS'' AND ANY
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef ENTID_H
#define ENTID_H

/* Entanglement ID format */
typedef struct
{
	unsigned long ipA;		/* Node holding one qubit */
	unsigned short portA;		/* Port of classical comms */
	unsigned short appA;		/* Application using entanglement */
	unsigned long ipB;
	unsigned short portB;
	unsigned short appB;
	unsigned long id;		/* Entanglement identifier */
	unsigned long long timestamp;	/* Creation time */
	unsigned long long tog;		/* Time of goodness */
	unsigned short goodness;	/* Goodness parameter */
	unsigned char DF;		/* Directionality flag creation */
	unsigned char unused;		/* Not used - align */
} __attribute__((__packed__)) entanglementID;

#endif

