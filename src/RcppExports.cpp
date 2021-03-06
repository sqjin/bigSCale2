// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// DE_Rcpp
NumericVector DE_Rcpp(NumericMatrix expr_norm_1, NumericMatrix expr_norm_2, NumericMatrix log_scores, IntegerVector ind_A, NumericVector lib_size_1, NumericVector lib_size_2);
RcppExport SEXP _bigSCale_DE_Rcpp(SEXP expr_norm_1SEXP, SEXP expr_norm_2SEXP, SEXP log_scoresSEXP, SEXP ind_ASEXP, SEXP lib_size_1SEXP, SEXP lib_size_2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type expr_norm_1(expr_norm_1SEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type expr_norm_2(expr_norm_2SEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type log_scores(log_scoresSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type ind_A(ind_ASEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lib_size_1(lib_size_1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lib_size_2(lib_size_2SEXP);
    rcpp_result_gen = Rcpp::wrap(DE_Rcpp(expr_norm_1, expr_norm_2, log_scores, ind_A, lib_size_1, lib_size_2));
    return rcpp_result_gen;
END_RCPP
}
// C_compute_distances
NumericVector C_compute_distances(NumericMatrix expr_driving_norm, NumericMatrix log_scores, IntegerVector ind_A, NumericVector lib_size);
RcppExport SEXP _bigSCale_C_compute_distances(SEXP expr_driving_normSEXP, SEXP log_scoresSEXP, SEXP ind_ASEXP, SEXP lib_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type expr_driving_norm(expr_driving_normSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type log_scores(log_scoresSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type ind_A(ind_ASEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lib_size(lib_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(C_compute_distances(expr_driving_norm, log_scores, ind_A, lib_size));
    return rcpp_result_gen;
END_RCPP
}
// distances_icells
NumericVector distances_icells(NumericMatrix expr_driving_norm, NumericMatrix log_scores, IntegerVector ind_A, NumericVector lib_size);
RcppExport SEXP _bigSCale_distances_icells(SEXP expr_driving_normSEXP, SEXP log_scoresSEXP, SEXP ind_ASEXP, SEXP lib_sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type expr_driving_norm(expr_driving_normSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type log_scores(log_scoresSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type ind_A(ind_ASEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lib_size(lib_sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(distances_icells(expr_driving_norm, log_scores, ind_A, lib_size));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_hello_world
List rcpp_hello_world();
RcppExport SEXP _bigSCale_rcpp_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello_world());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_bigSCale_DE_Rcpp", (DL_FUNC) &_bigSCale_DE_Rcpp, 6},
    {"_bigSCale_C_compute_distances", (DL_FUNC) &_bigSCale_C_compute_distances, 4},
    {"_bigSCale_distances_icells", (DL_FUNC) &_bigSCale_distances_icells, 4},
    {"_bigSCale_rcpp_hello_world", (DL_FUNC) &_bigSCale_rcpp_hello_world, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_bigSCale(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
