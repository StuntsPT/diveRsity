// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// allCount
int allCount(CharacterMatrix x);
RcppExport SEXP diveRsity_allCount(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterMatrix >::type x(xSEXP);
    __result = Rcpp::wrap(allCount(x));
    return __result;
END_RCPP
}
// bsHetCalc
double bsHetCalc(CharacterMatrix af);
RcppExport SEXP diveRsity_bsHetCalc(SEXP afSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterMatrix >::type af(afSEXP);
    __result = Rcpp::wrap(bsHetCalc(af));
    return __result;
END_RCPP
}
// diffCalcHarm
NumericVector diffCalcHarm(NumericVector idt, NumericMatrix pw);
RcppExport SEXP diveRsity_diffCalcHarm(SEXP idtSEXP, SEXP pwSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type idt(idtSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type pw(pwSEXP);
    __result = Rcpp::wrap(diffCalcHarm(idt, pw));
    return __result;
END_RCPP
}
// expHet
NumericVector expHet(NumericMatrix af);
RcppExport SEXP diveRsity_expHet(SEXP afSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type af(afSEXP);
    __result = Rcpp::wrap(expHet(af));
    return __result;
END_RCPP
}
// genos2mat
NumericMatrix genos2mat(NumericMatrix mat, IntegerVector ip, NumericVector na);
RcppExport SEXP diveRsity_genos2mat(SEXP matSEXP, SEXP ipSEXP, SEXP naSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type mat(matSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type ip(ipSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type na(naSEXP);
    __result = Rcpp::wrap(genos2mat(mat, ip, na));
    return __result;
END_RCPP
}
// glbWCcpp
List glbWCcpp(IntegerVector hsum, NumericMatrix af, NumericVector indtyp);
RcppExport SEXP diveRsity_glbWCcpp(SEXP hsumSEXP, SEXP afSEXP, SEXP indtypSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< IntegerVector >::type hsum(hsumSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type af(afSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type indtyp(indtypSEXP);
    __result = Rcpp::wrap(glbWCcpp(hsum, af, indtyp));
    return __result;
END_RCPP
}
// hweTab
NumericMatrix hweTab(CharacterMatrix af);
RcppExport SEXP diveRsity_hweTab(SEXP afSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterMatrix >::type af(afSEXP);
    __result = Rcpp::wrap(hweTab(af));
    return __result;
END_RCPP
}
// myTab
NumericVector myTab(CharacterVector x);
RcppExport SEXP diveRsity_myTab(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    __result = Rcpp::wrap(myTab(x));
    return __result;
END_RCPP
}
// obsHet
double obsHet(CharacterMatrix in_mat);
RcppExport SEXP diveRsity_obsHet(SEXP in_matSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterMatrix >::type in_mat(in_matSEXP);
    __result = Rcpp::wrap(obsHet(in_mat));
    return __result;
END_RCPP
}
// pwHCalc
List pwHCalc(NumericMatrix af, NumericVector sHarm, IntegerMatrix pw);
RcppExport SEXP diveRsity_pwHCalc(SEXP afSEXP, SEXP sHarmSEXP, SEXP pwSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type af(afSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sHarm(sHarmSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type pw(pwSEXP);
    __result = Rcpp::wrap(pwHCalc(af, sHarm, pw));
    return __result;
END_RCPP
}
// pwHt
List pwHt(NumericMatrix af, IntegerMatrix pw);
RcppExport SEXP diveRsity_pwHt(SEXP afSEXP, SEXP pwSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type af(afSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type pw(pwSEXP);
    __result = Rcpp::wrap(pwHt(af, pw));
    return __result;
END_RCPP
}
// pwTabMerge
List pwTabMerge(List hsum, NumericMatrix pw);
RcppExport SEXP diveRsity_pwTabMerge(SEXP hsumSEXP, SEXP pwSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type hsum(hsumSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type pw(pwSEXP);
    __result = Rcpp::wrap(pwTabMerge(hsum, pw));
    return __result;
END_RCPP
}
// pwWCcpp
List pwWCcpp(List hsum1, NumericMatrix af1, NumericVector indtyp1, IntegerMatrix pw);
RcppExport SEXP diveRsity_pwWCcpp(SEXP hsum1SEXP, SEXP af1SEXP, SEXP indtyp1SEXP, SEXP pwSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type hsum1(hsum1SEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type af1(af1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type indtyp1(indtyp1SEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type pw(pwSEXP);
    __result = Rcpp::wrap(pwWCcpp(hsum1, af1, indtyp1, pw));
    return __result;
END_RCPP
}
// Tab
IntegerVector Tab(CharacterVector x);
RcppExport SEXP diveRsity_Tab(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type x(xSEXP);
    __result = Rcpp::wrap(Tab(x));
    return __result;
END_RCPP
}
// tabMerge
NumericVector tabMerge(List hsum);
RcppExport SEXP diveRsity_tabMerge(SEXP hsumSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type hsum(hsumSEXP);
    __result = Rcpp::wrap(tabMerge(hsum));
    return __result;
END_RCPP
}
// varFunc
List varFunc(NumericMatrix af, double sHarm);
RcppExport SEXP diveRsity_varFunc(SEXP afSEXP, SEXP sHarmSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type af(afSEXP);
    Rcpp::traits::input_parameter< double >::type sHarm(sHarmSEXP);
    __result = Rcpp::wrap(varFunc(af, sHarm));
    return __result;
END_RCPP
}
