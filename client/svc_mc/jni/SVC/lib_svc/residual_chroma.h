/*****************************************************************************
   *
   *  Open SVC Decoder developped in IETR image lab
   *
   *
   *
   *              M�d�ric BLESTEL <mblestel@insa-rennes.Fr>
   *              Mickael RAULET <mraulet@insa-rennes.Fr>
   *              http://www.ietr.org/
   *
   *
   *
   *
   *
   * This library is free software; you can redistribute it and/or
   * modify it under the terms of the GNU Lesser General Public
   * License as published by the Free Software Foundation; either
   * version 2 of the License, or (at your option) any later version.
   *
   * This library is distributed in the hope that it will be useful,
   * but WITHOUT ANY WARRANTY; without even the implied warranty of
   * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   * Lesser General Public License for more details.
   *
   * You should have received a copy of the GNU Lesser General Public
   * License along with this library; if not, write to the Free Software
   * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
   *
   *
   * $Id$
   *
   **************************************************************************/


#ifndef RESIDU_H
#define RESIDU_H

#include "type.h"
#include "svc_type.h"

void StoreResChroma (short *image_Cb, short *image_Cr, const RESIDU *CurrResidu, const PPS *Pps, const short PicWidthInPix, const W_TABLES *Quantif);
void AddResChroma   (short *image_Cb, short *image_Cr, const RESIDU *CurrResidu, const PPS *Pps, const short PicWidthInPix, const W_TABLES *Quantif);
void SCoeffChromaAddRes  (short *image_Cb, short *image_Cr, const RESIDU *CurrResidu, const short PicWidthInPix);
void SCoeffChromaAddPic (unsigned char *Cb, unsigned char *Cr, const RESIDU *CurrResidu, const short PicWidthInPix);


#endif
