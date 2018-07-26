// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// posdefsqrt
arma::mat posdefsqrt(arma::mat& x);
RcppExport SEXP _matrixdist_posdefsqrt(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(posdefsqrt(x));
    return rcpp_result_gen;
END_RCPP
}
// posdefinvsqrt
arma::mat posdefinvsqrt(arma::mat& x);
RcppExport SEXP _matrixdist_posdefinvsqrt(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(posdefinvsqrt(x));
    return rcpp_result_gen;
END_RCPP
}
// testsymmetric
bool testsymmetric(arma::mat x, double tol);
RcppExport SEXP _matrixdist_testsymmetric(SEXP xSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(testsymmetric(x, tol));
    return rcpp_result_gen;
END_RCPP
}
// dmatnorm_calc
arma::colvec dmatnorm_calc(arma::cube& x, arma::mat& mean, arma::mat& U, arma::mat& V);
RcppExport SEXP _matrixdist_dmatnorm_calc(SEXP xSEXP, SEXP meanSEXP, SEXP USEXP, SEXP VSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type U(USEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type V(VSEXP);
    rcpp_result_gen = Rcpp::wrap(dmatnorm_calc(x, mean, U, V));
    return rcpp_result_gen;
END_RCPP
}
// dmat_t_calc
arma::colvec dmat_t_calc(arma::cube& x, double df, arma::mat& mean, arma::mat& U, arma::mat& V);
RcppExport SEXP _matrixdist_dmat_t_calc(SEXP xSEXP, SEXP dfSEXP, SEXP meanSEXP, SEXP USEXP, SEXP VSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube& >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type df(dfSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type U(USEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type V(VSEXP);
    rcpp_result_gen = Rcpp::wrap(dmat_t_calc(x, df, mean, U, V));
    return rcpp_result_gen;
END_RCPP
}
// xatx
arma::cube xatx(arma::cube& x, arma::mat& U);
RcppExport SEXP _matrixdist_xatx(SEXP xSEXP, SEXP USEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type U(USEXP);
    rcpp_result_gen = Rcpp::wrap(xatx(x, U));
    return rcpp_result_gen;
END_RCPP
}
// txax
arma::cube txax(arma::cube& x, arma::mat& U);
RcppExport SEXP _matrixdist_txax(SEXP xSEXP, SEXP USEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type U(USEXP);
    rcpp_result_gen = Rcpp::wrap(txax(x, U));
    return rcpp_result_gen;
END_RCPP
}
// rmat_inv_t_calc
arma::cube rmat_inv_t_calc(arma::cube& S, arma::cube& mat, arma::mat& U, arma::mat& V, arma::mat& mean);
RcppExport SEXP _matrixdist_rmat_inv_t_calc(SEXP SSEXP, SEXP matSEXP, SEXP USEXP, SEXP VSEXP, SEXP meanSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube& >::type S(SSEXP);
    Rcpp::traits::input_parameter< arma::cube& >::type mat(matSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type U(USEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type V(VSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type mean(meanSEXP);
    rcpp_result_gen = Rcpp::wrap(rmat_inv_t_calc(S, mat, U, V, mean));
    return rcpp_result_gen;
END_RCPP
}
// dmat_inv_t_calc
arma::colvec dmat_inv_t_calc(arma::cube& x, double df, arma::mat& mean, arma::mat& U, arma::mat& V);
RcppExport SEXP _matrixdist_dmat_inv_t_calc(SEXP xSEXP, SEXP dfSEXP, SEXP meanSEXP, SEXP USEXP, SEXP VSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube& >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type df(dfSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type U(USEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type V(VSEXP);
    rcpp_result_gen = Rcpp::wrap(dmat_inv_t_calc(x, df, mean, U, V));
    return rcpp_result_gen;
END_RCPP
}
// cubeinv
arma::cube cubeinv(arma::cube& x);
RcppExport SEXP _matrixdist_cubeinv(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cubeinv(x));
    return rcpp_result_gen;
END_RCPP
}
// cubemult
arma::cube cubemult(arma::cube& x, arma::cube& y);
RcppExport SEXP _matrixdist_cubemult(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::cube& >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(cubemult(x, y));
    return rcpp_result_gen;
END_RCPP
}
// detsum
double detsum(arma::cube& x);
RcppExport SEXP _matrixdist_detsum(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(detsum(x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_matrixdist_posdefsqrt", (DL_FUNC) &_matrixdist_posdefsqrt, 1},
    {"_matrixdist_posdefinvsqrt", (DL_FUNC) &_matrixdist_posdefinvsqrt, 1},
    {"_matrixdist_testsymmetric", (DL_FUNC) &_matrixdist_testsymmetric, 2},
    {"_matrixdist_dmatnorm_calc", (DL_FUNC) &_matrixdist_dmatnorm_calc, 4},
    {"_matrixdist_dmat_t_calc", (DL_FUNC) &_matrixdist_dmat_t_calc, 5},
    {"_matrixdist_xatx", (DL_FUNC) &_matrixdist_xatx, 2},
    {"_matrixdist_txax", (DL_FUNC) &_matrixdist_txax, 2},
    {"_matrixdist_rmat_inv_t_calc", (DL_FUNC) &_matrixdist_rmat_inv_t_calc, 5},
    {"_matrixdist_dmat_inv_t_calc", (DL_FUNC) &_matrixdist_dmat_inv_t_calc, 5},
    {"_matrixdist_cubeinv", (DL_FUNC) &_matrixdist_cubeinv, 1},
    {"_matrixdist_cubemult", (DL_FUNC) &_matrixdist_cubemult, 2},
    {"_matrixdist_detsum", (DL_FUNC) &_matrixdist_detsum, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_matrixdist(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
