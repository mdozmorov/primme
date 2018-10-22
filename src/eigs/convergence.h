/*******************************************************************************
 * Copyright (c) 2017, College of William & Mary
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the College of William & Mary nor the
 *       names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COLLEGE OF WILLIAM & MARY BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * PRIMME: https://github.com/primme/primme
 * Contact: Andreas Stathopoulos, a n d r e a s _at_ c s . w m . e d u
 *******************************************************************************
 *   NOTE: THIS FILE IS AUTOMATICALLY GENERATED. PLEASE DON'T MODIFY
 ******************************************************************************/


#ifndef convergence_H
#define convergence_H
int check_convergence_sprimme(float *X, PRIMME_INT ldX, int givenX, float *R,
      PRIMME_INT ldR, int givenR, float *evecs, int numLocked,
      PRIMME_INT ldevecs, float *Bevecs, PRIMME_INT ldBevecs, float *VtBV,
      int ldVtBV, int left, int right, int *flags, float *blockNorms,
      float *hVals, int *reset, int practConvCheck, primme_context ctx);
int check_convergence_cprimme(PRIMME_COMPLEX_FLOAT *X, PRIMME_INT ldX, int givenX, PRIMME_COMPLEX_FLOAT *R,
      PRIMME_INT ldR, int givenR, PRIMME_COMPLEX_FLOAT *evecs, int numLocked,
      PRIMME_INT ldevecs, PRIMME_COMPLEX_FLOAT *Bevecs, PRIMME_INT ldBevecs, PRIMME_COMPLEX_FLOAT *VtBV,
      int ldVtBV, int left, int right, int *flags, float *blockNorms,
      float *hVals, int *reset, int practConvCheck, primme_context ctx);
#if !defined(CHECK_TEMPLATE) && !defined(check_convergence_Sprimme)
#  define check_convergence_Sprimme CONCAT(check_convergence_,SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(check_convergence_Rprimme)
#  define check_convergence_Rprimme CONCAT(check_convergence_,REAL_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(check_convergence_SHprimme)
#  define check_convergence_SHprimme CONCAT(check_convergence_,HOST_SCALAR_SUF)
#endif
#if !defined(CHECK_TEMPLATE) && !defined(check_convergence_RHprimme)
#  define check_convergence_RHprimme CONCAT(check_convergence_,HOST_REAL_SUF)
#endif
int check_convergence_dprimme(double *X, PRIMME_INT ldX, int givenX, double *R,
      PRIMME_INT ldR, int givenR, double *evecs, int numLocked,
      PRIMME_INT ldevecs, double *Bevecs, PRIMME_INT ldBevecs, double *VtBV,
      int ldVtBV, int left, int right, int *flags, double *blockNorms,
      double *hVals, int *reset, int practConvCheck, primme_context ctx);
int check_convergence_zprimme(PRIMME_COMPLEX_DOUBLE *X, PRIMME_INT ldX, int givenX, PRIMME_COMPLEX_DOUBLE *R,
      PRIMME_INT ldR, int givenR, PRIMME_COMPLEX_DOUBLE *evecs, int numLocked,
      PRIMME_INT ldevecs, PRIMME_COMPLEX_DOUBLE *Bevecs, PRIMME_INT ldBevecs, PRIMME_COMPLEX_DOUBLE *VtBV,
      int ldVtBV, int left, int right, int *flags, double *blockNorms,
      double *hVals, int *reset, int practConvCheck, primme_context ctx);
int check_convergence_smagmaprimme(magma_float *X, PRIMME_INT ldX, int givenX, magma_float *R,
      PRIMME_INT ldR, int givenR, magma_float *evecs, int numLocked,
      PRIMME_INT ldevecs, magma_float *Bevecs, PRIMME_INT ldBevecs, float *VtBV,
      int ldVtBV, int left, int right, int *flags, float *blockNorms,
      float *hVals, int *reset, int practConvCheck, primme_context ctx);
int check_convergence_cmagmaprimme(magma_complex_float *X, PRIMME_INT ldX, int givenX, magma_complex_float *R,
      PRIMME_INT ldR, int givenR, magma_complex_float *evecs, int numLocked,
      PRIMME_INT ldevecs, magma_complex_float *Bevecs, PRIMME_INT ldBevecs, PRIMME_COMPLEX_FLOAT *VtBV,
      int ldVtBV, int left, int right, int *flags, float *blockNorms,
      float *hVals, int *reset, int practConvCheck, primme_context ctx);
int check_convergence_dmagmaprimme(magma_double *X, PRIMME_INT ldX, int givenX, magma_double *R,
      PRIMME_INT ldR, int givenR, magma_double *evecs, int numLocked,
      PRIMME_INT ldevecs, magma_double *Bevecs, PRIMME_INT ldBevecs, double *VtBV,
      int ldVtBV, int left, int right, int *flags, double *blockNorms,
      double *hVals, int *reset, int practConvCheck, primme_context ctx);
int check_convergence_zmagmaprimme(magma_complex_double *X, PRIMME_INT ldX, int givenX, magma_complex_double *R,
      PRIMME_INT ldR, int givenR, magma_complex_double *evecs, int numLocked,
      PRIMME_INT ldevecs, magma_complex_double *Bevecs, PRIMME_INT ldBevecs, PRIMME_COMPLEX_DOUBLE *VtBV,
      int ldVtBV, int left, int right, int *flags, double *blockNorms,
      double *hVals, int *reset, int practConvCheck, primme_context ctx);
#endif
