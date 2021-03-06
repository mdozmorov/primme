// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "PRIMME_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// primme_initialize_rcpp
PrimmeParams primme_initialize_rcpp();
RcppExport SEXP _PRIMME_primme_initialize_rcpp() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(primme_initialize_rcpp());
    return rcpp_result_gen;
END_RCPP
}
// primme_free_rcpp
void primme_free_rcpp(PrimmeParams primme);
RcppExport SEXP _PRIMME_primme_free_rcpp(SEXP primmeSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PrimmeParams >::type primme(primmeSEXP);
    primme_free_rcpp(primme);
    return R_NilValue;
END_RCPP
}
// primme_set_method_rcpp
void primme_set_method_rcpp(std::string methodstr, PrimmeParams primme);
RcppExport SEXP _PRIMME_primme_set_method_rcpp(SEXP methodstrSEXP, SEXP primmeSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type methodstr(methodstrSEXP);
    Rcpp::traits::input_parameter< PrimmeParams >::type primme(primmeSEXP);
    primme_set_method_rcpp(methodstr, primme);
    return R_NilValue;
END_RCPP
}
// primme_get_member_rcpp
SEXP primme_get_member_rcpp(std::string labelstr, PrimmeParams primme);
RcppExport SEXP _PRIMME_primme_get_member_rcpp(SEXP labelstrSEXP, SEXP primmeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type labelstr(labelstrSEXP);
    Rcpp::traits::input_parameter< PrimmeParams >::type primme(primmeSEXP);
    rcpp_result_gen = Rcpp::wrap(primme_get_member_rcpp(labelstr, primme));
    return rcpp_result_gen;
END_RCPP
}
// primme_set_member_rcpp
void primme_set_member_rcpp(std::string labelstr, SEXP value, PrimmeParams primme);
RcppExport SEXP _PRIMME_primme_set_member_rcpp(SEXP labelstrSEXP, SEXP valueSEXP, SEXP primmeSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type labelstr(labelstrSEXP);
    Rcpp::traits::input_parameter< SEXP >::type value(valueSEXP);
    Rcpp::traits::input_parameter< PrimmeParams >::type primme(primmeSEXP);
    primme_set_member_rcpp(labelstr, value, primme);
    return R_NilValue;
END_RCPP
}
// dprimme_rcpp
List dprimme_rcpp(NumericMatrix ortho, NumericMatrix init, SEXP A, SEXP B, SEXP prec, SEXP convTest, PrimmeParams primme);
RcppExport SEXP _PRIMME_dprimme_rcpp(SEXP orthoSEXP, SEXP initSEXP, SEXP ASEXP, SEXP BSEXP, SEXP precSEXP, SEXP convTestSEXP, SEXP primmeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type ortho(orthoSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type init(initSEXP);
    Rcpp::traits::input_parameter< SEXP >::type A(ASEXP);
    Rcpp::traits::input_parameter< SEXP >::type B(BSEXP);
    Rcpp::traits::input_parameter< SEXP >::type prec(precSEXP);
    Rcpp::traits::input_parameter< SEXP >::type convTest(convTestSEXP);
    Rcpp::traits::input_parameter< PrimmeParams >::type primme(primmeSEXP);
    rcpp_result_gen = Rcpp::wrap(dprimme_rcpp(ortho, init, A, B, prec, convTest, primme));
    return rcpp_result_gen;
END_RCPP
}
// zprimme_rcpp
List zprimme_rcpp(ComplexMatrix ortho, ComplexMatrix init, SEXP A, SEXP B, SEXP prec, SEXP convTest, PrimmeParams primme);
RcppExport SEXP _PRIMME_zprimme_rcpp(SEXP orthoSEXP, SEXP initSEXP, SEXP ASEXP, SEXP BSEXP, SEXP precSEXP, SEXP convTestSEXP, SEXP primmeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< ComplexMatrix >::type ortho(orthoSEXP);
    Rcpp::traits::input_parameter< ComplexMatrix >::type init(initSEXP);
    Rcpp::traits::input_parameter< SEXP >::type A(ASEXP);
    Rcpp::traits::input_parameter< SEXP >::type B(BSEXP);
    Rcpp::traits::input_parameter< SEXP >::type prec(precSEXP);
    Rcpp::traits::input_parameter< SEXP >::type convTest(convTestSEXP);
    Rcpp::traits::input_parameter< PrimmeParams >::type primme(primmeSEXP);
    rcpp_result_gen = Rcpp::wrap(zprimme_rcpp(ortho, init, A, B, prec, convTest, primme));
    return rcpp_result_gen;
END_RCPP
}
// primme_svds_initialize_rcpp
PrimmeSvdsParams primme_svds_initialize_rcpp();
RcppExport SEXP _PRIMME_primme_svds_initialize_rcpp() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(primme_svds_initialize_rcpp());
    return rcpp_result_gen;
END_RCPP
}
// primme_svds_free_rcpp
void primme_svds_free_rcpp(PrimmeSvdsParams primme_svds);
RcppExport SEXP _PRIMME_primme_svds_free_rcpp(SEXP primme_svdsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PrimmeSvdsParams >::type primme_svds(primme_svdsSEXP);
    primme_svds_free_rcpp(primme_svds);
    return R_NilValue;
END_RCPP
}
// primme_svds_set_method_rcpp
void primme_svds_set_method_rcpp(std::string methodstr, std::string methodStage1str, std::string methodStage2str, PrimmeSvdsParams primme_svds);
RcppExport SEXP _PRIMME_primme_svds_set_method_rcpp(SEXP methodstrSEXP, SEXP methodStage1strSEXP, SEXP methodStage2strSEXP, SEXP primme_svdsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type methodstr(methodstrSEXP);
    Rcpp::traits::input_parameter< std::string >::type methodStage1str(methodStage1strSEXP);
    Rcpp::traits::input_parameter< std::string >::type methodStage2str(methodStage2strSEXP);
    Rcpp::traits::input_parameter< PrimmeSvdsParams >::type primme_svds(primme_svdsSEXP);
    primme_svds_set_method_rcpp(methodstr, methodStage1str, methodStage2str, primme_svds);
    return R_NilValue;
END_RCPP
}
// primme_svds_get_member_rcpp
SEXP primme_svds_get_member_rcpp(std::string labelstr, PrimmeSvdsParams primme_svds);
RcppExport SEXP _PRIMME_primme_svds_get_member_rcpp(SEXP labelstrSEXP, SEXP primme_svdsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type labelstr(labelstrSEXP);
    Rcpp::traits::input_parameter< PrimmeSvdsParams >::type primme_svds(primme_svdsSEXP);
    rcpp_result_gen = Rcpp::wrap(primme_svds_get_member_rcpp(labelstr, primme_svds));
    return rcpp_result_gen;
END_RCPP
}
// primme_svds_set_member_rcpp
void primme_svds_set_member_rcpp(std::string labelstr, SEXP value, PrimmeSvdsParams primme_svds);
RcppExport SEXP _PRIMME_primme_svds_set_member_rcpp(SEXP labelstrSEXP, SEXP valueSEXP, SEXP primme_svdsSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type labelstr(labelstrSEXP);
    Rcpp::traits::input_parameter< SEXP >::type value(valueSEXP);
    Rcpp::traits::input_parameter< PrimmeSvdsParams >::type primme_svds(primme_svdsSEXP);
    primme_svds_set_member_rcpp(labelstr, value, primme_svds);
    return R_NilValue;
END_RCPP
}
// dprimme_svds_rcpp
List dprimme_svds_rcpp(NumericMatrix orthol, NumericMatrix orthor, NumericMatrix initl, NumericMatrix initr, SEXP A, SEXP prec, PrimmeSvdsParams primme_svds);
RcppExport SEXP _PRIMME_dprimme_svds_rcpp(SEXP ortholSEXP, SEXP orthorSEXP, SEXP initlSEXP, SEXP initrSEXP, SEXP ASEXP, SEXP precSEXP, SEXP primme_svdsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type orthol(ortholSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type orthor(orthorSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type initl(initlSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type initr(initrSEXP);
    Rcpp::traits::input_parameter< SEXP >::type A(ASEXP);
    Rcpp::traits::input_parameter< SEXP >::type prec(precSEXP);
    Rcpp::traits::input_parameter< PrimmeSvdsParams >::type primme_svds(primme_svdsSEXP);
    rcpp_result_gen = Rcpp::wrap(dprimme_svds_rcpp(orthol, orthor, initl, initr, A, prec, primme_svds));
    return rcpp_result_gen;
END_RCPP
}
// zprimme_svds_rcpp
List zprimme_svds_rcpp(ComplexMatrix orthol, ComplexMatrix orthor, ComplexMatrix initl, ComplexMatrix initr, SEXP A, SEXP prec, PrimmeSvdsParams primme_svds);
RcppExport SEXP _PRIMME_zprimme_svds_rcpp(SEXP ortholSEXP, SEXP orthorSEXP, SEXP initlSEXP, SEXP initrSEXP, SEXP ASEXP, SEXP precSEXP, SEXP primme_svdsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< ComplexMatrix >::type orthol(ortholSEXP);
    Rcpp::traits::input_parameter< ComplexMatrix >::type orthor(orthorSEXP);
    Rcpp::traits::input_parameter< ComplexMatrix >::type initl(initlSEXP);
    Rcpp::traits::input_parameter< ComplexMatrix >::type initr(initrSEXP);
    Rcpp::traits::input_parameter< SEXP >::type A(ASEXP);
    Rcpp::traits::input_parameter< SEXP >::type prec(precSEXP);
    Rcpp::traits::input_parameter< PrimmeSvdsParams >::type primme_svds(primme_svdsSEXP);
    rcpp_result_gen = Rcpp::wrap(zprimme_svds_rcpp(orthol, orthor, initl, initr, A, prec, primme_svds));
    return rcpp_result_gen;
END_RCPP
}
