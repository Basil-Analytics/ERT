// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// find_seqs_aut
NumericVector find_seqs_aut(NumericVector v, NumericVector r, NumericVector t, double start_incl, double year_turn, double cum_turn, int tolerance);
RcppExport SEXP _ERT_find_seqs_aut(SEXP vSEXP, SEXP rSEXP, SEXP tSEXP, SEXP start_inclSEXP, SEXP year_turnSEXP, SEXP cum_turnSEXP, SEXP toleranceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type r(rSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type t(tSEXP);
    Rcpp::traits::input_parameter< double >::type start_incl(start_inclSEXP);
    Rcpp::traits::input_parameter< double >::type year_turn(year_turnSEXP);
    Rcpp::traits::input_parameter< double >::type cum_turn(cum_turnSEXP);
    Rcpp::traits::input_parameter< int >::type tolerance(toleranceSEXP);
    rcpp_result_gen = Rcpp::wrap(find_seqs_aut(v, r, t, start_incl, year_turn, cum_turn, tolerance));
    return rcpp_result_gen;
END_RCPP
}
// find_seqs_dem
NumericVector find_seqs_dem(NumericVector v, NumericVector r, NumericVector t, double start_incl, double year_turn, double cum_turn, int tolerance);
RcppExport SEXP _ERT_find_seqs_dem(SEXP vSEXP, SEXP rSEXP, SEXP tSEXP, SEXP start_inclSEXP, SEXP year_turnSEXP, SEXP cum_turnSEXP, SEXP toleranceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type v(vSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type r(rSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type t(tSEXP);
    Rcpp::traits::input_parameter< double >::type start_incl(start_inclSEXP);
    Rcpp::traits::input_parameter< double >::type year_turn(year_turnSEXP);
    Rcpp::traits::input_parameter< double >::type cum_turn(cum_turnSEXP);
    Rcpp::traits::input_parameter< int >::type tolerance(toleranceSEXP);
    rcpp_result_gen = Rcpp::wrap(find_seqs_dem(v, r, t, start_incl, year_turn, cum_turn, tolerance));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ERT_find_seqs_aut", (DL_FUNC) &_ERT_find_seqs_aut, 7},
    {"_ERT_find_seqs_dem", (DL_FUNC) &_ERT_find_seqs_dem, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_ERT(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
