// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// AddDual2
arma::cube AddDual2(const arma::cube& path, Rcpp::NumericVector subsim_, const arma::cube& expected_fitted, const Rcpp::Function& Reward_, const Rcpp::Function& Scrap_, Rcpp::NumericVector control_, const arma::umat& basis, const std::string& basis_type);
RcppExport SEXP rlsm_AddDual2(SEXP pathSEXP, SEXP subsim_SEXP, SEXP expected_fittedSEXP, SEXP Reward_SEXP, SEXP Scrap_SEXP, SEXP control_SEXP, SEXP basisSEXP, SEXP basis_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::cube& >::type path(pathSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type subsim_(subsim_SEXP);
    Rcpp::traits::input_parameter< const arma::cube& >::type expected_fitted(expected_fittedSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Function& >::type Reward_(Reward_SEXP);
    Rcpp::traits::input_parameter< const Rcpp::Function& >::type Scrap_(Scrap_SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type control_(control_SEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type basis(basisSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type basis_type(basis_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(AddDual2(path, subsim_, expected_fitted, Reward_, Scrap_, control_, basis, basis_type));
    return rcpp_result_gen;
END_RCPP
}
// AddDual
arma::cube AddDual(const arma::cube& path, Rcpp::NumericVector subsim_, const arma::cube& fitted_value, const Rcpp::Function& Scrap_, const arma::umat& basis, const std::string& basis_type);
RcppExport SEXP rlsm_AddDual(SEXP pathSEXP, SEXP subsim_SEXP, SEXP fitted_valueSEXP, SEXP Scrap_SEXP, SEXP basisSEXP, SEXP basis_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::cube& >::type path(pathSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type subsim_(subsim_SEXP);
    Rcpp::traits::input_parameter< const arma::cube& >::type fitted_value(fitted_valueSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Function& >::type Scrap_(Scrap_SEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type basis(basisSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type basis_type(basis_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(AddDual(path, subsim_, fitted_value, Scrap_, basis, basis_type));
    return rcpp_result_gen;
END_RCPP
}
// PBasis
arma::mat PBasis(const arma::mat& data, const arma::umat& basis, const bool& intercept, const std::size_t& n_terms);
RcppExport SEXP rlsm_PBasis(SEXP dataSEXP, SEXP basisSEXP, SEXP interceptSEXP, SEXP n_termsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type basis(basisSEXP);
    Rcpp::traits::input_parameter< const bool& >::type intercept(interceptSEXP);
    Rcpp::traits::input_parameter< const std::size_t& >::type n_terms(n_termsSEXP);
    rcpp_result_gen = Rcpp::wrap(PBasis(data, basis, intercept, n_terms));
    return rcpp_result_gen;
END_RCPP
}
// Bounds
Rcpp::List Bounds(const arma::cube& path, const Rcpp::Function& Reward_, const Rcpp::Function& Scrap_, Rcpp::NumericVector control_, const arma::cube& mart, const arma::ucube& path_action);
RcppExport SEXP rlsm_Bounds(SEXP pathSEXP, SEXP Reward_SEXP, SEXP Scrap_SEXP, SEXP control_SEXP, SEXP martSEXP, SEXP path_actionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::cube& >::type path(pathSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Function& >::type Reward_(Reward_SEXP);
    Rcpp::traits::input_parameter< const Rcpp::Function& >::type Scrap_(Scrap_SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type control_(control_SEXP);
    Rcpp::traits::input_parameter< const arma::cube& >::type mart(martSEXP);
    Rcpp::traits::input_parameter< const arma::ucube& >::type path_action(path_actionSEXP);
    rcpp_result_gen = Rcpp::wrap(Bounds(path, Reward_, Scrap_, control_, mart, path_action));
    return rcpp_result_gen;
END_RCPP
}
// SVDCoeff
arma::vec SVDCoeff(const arma::mat& xreg, const arma::vec& yreg);
RcppExport SEXP rlsm_SVDCoeff(SEXP xregSEXP, SEXP yregSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type xreg(xregSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type yreg(yregSEXP);
    rcpp_result_gen = Rcpp::wrap(SVDCoeff(xreg, yreg));
    return rcpp_result_gen;
END_RCPP
}
// LSM
Rcpp::List LSM(const arma::cube& path, const Rcpp::Function& Reward_, const Rcpp::Function& Scrap_, Rcpp::NumericVector control_, const arma::umat& basis, const bool& intercept, const std::string& basis_type);
RcppExport SEXP rlsm_LSM(SEXP pathSEXP, SEXP Reward_SEXP, SEXP Scrap_SEXP, SEXP control_SEXP, SEXP basisSEXP, SEXP interceptSEXP, SEXP basis_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::cube& >::type path(pathSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Function& >::type Reward_(Reward_SEXP);
    Rcpp::traits::input_parameter< const Rcpp::Function& >::type Scrap_(Scrap_SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type control_(control_SEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type basis(basisSEXP);
    Rcpp::traits::input_parameter< const bool& >::type intercept(interceptSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type basis_type(basis_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(LSM(path, Reward_, Scrap_, control_, basis, intercept, basis_type));
    return rcpp_result_gen;
END_RCPP
}
// PathPolicy
arma::ucube PathPolicy(const arma::cube& path, const arma::cube& expected_value, const Rcpp::Function& Reward_, Rcpp::NumericVector control_, const arma::umat& basis, const bool& intercept, const std::string& basis_type);
RcppExport SEXP rlsm_PathPolicy(SEXP pathSEXP, SEXP expected_valueSEXP, SEXP Reward_SEXP, SEXP control_SEXP, SEXP basisSEXP, SEXP interceptSEXP, SEXP basis_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::cube& >::type path(pathSEXP);
    Rcpp::traits::input_parameter< const arma::cube& >::type expected_value(expected_valueSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Function& >::type Reward_(Reward_SEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type control_(control_SEXP);
    Rcpp::traits::input_parameter< const arma::umat& >::type basis(basisSEXP);
    Rcpp::traits::input_parameter< const bool& >::type intercept(interceptSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type basis_type(basis_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(PathPolicy(path, expected_value, Reward_, control_, basis, intercept, basis_type));
    return rcpp_result_gen;
END_RCPP
}
// CorrNormal
arma::mat CorrNormal(const int& n, const arma::mat& corr);
RcppExport SEXP rlsm_CorrNormal(SEXP nSEXP, SEXP corrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int& >::type n(nSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type corr(corrSEXP);
    rcpp_result_gen = Rcpp::wrap(CorrNormal(n, corr));
    return rcpp_result_gen;
END_RCPP
}
// BM
arma::cube BM(const double& start, const double& mu, const double& vol, const int& n_dec, const int& n_path, const bool& antithetic);
RcppExport SEXP rlsm_BM(SEXP startSEXP, SEXP muSEXP, SEXP volSEXP, SEXP n_decSEXP, SEXP n_pathSEXP, SEXP antitheticSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type start(startSEXP);
    Rcpp::traits::input_parameter< const double& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const double& >::type vol(volSEXP);
    Rcpp::traits::input_parameter< const int& >::type n_dec(n_decSEXP);
    Rcpp::traits::input_parameter< const int& >::type n_path(n_pathSEXP);
    Rcpp::traits::input_parameter< const bool& >::type antithetic(antitheticSEXP);
    rcpp_result_gen = Rcpp::wrap(BM(start, mu, vol, n_dec, n_path, antithetic));
    return rcpp_result_gen;
END_RCPP
}
// GBM
arma::cube GBM(const double& start, const double& mu, const double& vol, const int& n_dec, const int& n_path, const bool& antithetic);
RcppExport SEXP rlsm_GBM(SEXP startSEXP, SEXP muSEXP, SEXP volSEXP, SEXP n_decSEXP, SEXP n_pathSEXP, SEXP antitheticSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double& >::type start(startSEXP);
    Rcpp::traits::input_parameter< const double& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const double& >::type vol(volSEXP);
    Rcpp::traits::input_parameter< const int& >::type n_dec(n_decSEXP);
    Rcpp::traits::input_parameter< const int& >::type n_path(n_pathSEXP);
    Rcpp::traits::input_parameter< const bool& >::type antithetic(antitheticSEXP);
    rcpp_result_gen = Rcpp::wrap(GBM(start, mu, vol, n_dec, n_path, antithetic));
    return rcpp_result_gen;
END_RCPP
}
// CBM
arma::cube CBM(const arma::vec& start, const arma::vec& mu, const arma::vec& vol, const arma::mat& corr, const int& n_dec, const int& n_path, const bool& antithetic);
RcppExport SEXP rlsm_CBM(SEXP startSEXP, SEXP muSEXP, SEXP volSEXP, SEXP corrSEXP, SEXP n_decSEXP, SEXP n_pathSEXP, SEXP antitheticSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type start(startSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type vol(volSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type corr(corrSEXP);
    Rcpp::traits::input_parameter< const int& >::type n_dec(n_decSEXP);
    Rcpp::traits::input_parameter< const int& >::type n_path(n_pathSEXP);
    Rcpp::traits::input_parameter< const bool& >::type antithetic(antitheticSEXP);
    rcpp_result_gen = Rcpp::wrap(CBM(start, mu, vol, corr, n_dec, n_path, antithetic));
    return rcpp_result_gen;
END_RCPP
}
// CGBM
arma::cube CGBM(const arma::vec& start, const arma::vec& mu, const arma::vec& vol, const arma::mat& corr, const int& n_dec, const int& n_path, const bool& antithetic);
RcppExport SEXP rlsm_CGBM(SEXP startSEXP, SEXP muSEXP, SEXP volSEXP, SEXP corrSEXP, SEXP n_decSEXP, SEXP n_pathSEXP, SEXP antitheticSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type start(startSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type vol(volSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type corr(corrSEXP);
    Rcpp::traits::input_parameter< const int& >::type n_dec(n_decSEXP);
    Rcpp::traits::input_parameter< const int& >::type n_path(n_pathSEXP);
    Rcpp::traits::input_parameter< const bool& >::type antithetic(antitheticSEXP);
    rcpp_result_gen = Rcpp::wrap(CGBM(start, mu, vol, corr, n_dec, n_path, antithetic));
    return rcpp_result_gen;
END_RCPP
}
// NestedBM
arma::cube NestedBM(const arma::cube& path, const double& mu, const double& vol, const int& n_subsim, const bool& antithetic);
RcppExport SEXP rlsm_NestedBM(SEXP pathSEXP, SEXP muSEXP, SEXP volSEXP, SEXP n_subsimSEXP, SEXP antitheticSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::cube& >::type path(pathSEXP);
    Rcpp::traits::input_parameter< const double& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const double& >::type vol(volSEXP);
    Rcpp::traits::input_parameter< const int& >::type n_subsim(n_subsimSEXP);
    Rcpp::traits::input_parameter< const bool& >::type antithetic(antitheticSEXP);
    rcpp_result_gen = Rcpp::wrap(NestedBM(path, mu, vol, n_subsim, antithetic));
    return rcpp_result_gen;
END_RCPP
}
// NestedGBM
arma::cube NestedGBM(const arma::cube& path, const double& mu, const double& vol, const int& n_subsim, const bool& antithetic);
RcppExport SEXP rlsm_NestedGBM(SEXP pathSEXP, SEXP muSEXP, SEXP volSEXP, SEXP n_subsimSEXP, SEXP antitheticSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::cube& >::type path(pathSEXP);
    Rcpp::traits::input_parameter< const double& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const double& >::type vol(volSEXP);
    Rcpp::traits::input_parameter< const int& >::type n_subsim(n_subsimSEXP);
    Rcpp::traits::input_parameter< const bool& >::type antithetic(antitheticSEXP);
    rcpp_result_gen = Rcpp::wrap(NestedGBM(path, mu, vol, n_subsim, antithetic));
    return rcpp_result_gen;
END_RCPP
}
// NestedCBM
arma::cube NestedCBM(const arma::cube& path, const arma::vec& mu, const arma::vec& vol, const arma::mat& corr, const int& n_subsim, const bool& antithetic);
RcppExport SEXP rlsm_NestedCBM(SEXP pathSEXP, SEXP muSEXP, SEXP volSEXP, SEXP corrSEXP, SEXP n_subsimSEXP, SEXP antitheticSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::cube& >::type path(pathSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type vol(volSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type corr(corrSEXP);
    Rcpp::traits::input_parameter< const int& >::type n_subsim(n_subsimSEXP);
    Rcpp::traits::input_parameter< const bool& >::type antithetic(antitheticSEXP);
    rcpp_result_gen = Rcpp::wrap(NestedCBM(path, mu, vol, corr, n_subsim, antithetic));
    return rcpp_result_gen;
END_RCPP
}
// NestedCGBM
arma::cube NestedCGBM(const arma::cube& path, const arma::vec& mu, const arma::vec& vol, const arma::mat& corr, const int& n_subsim, const bool& antithetic);
RcppExport SEXP rlsm_NestedCGBM(SEXP pathSEXP, SEXP muSEXP, SEXP volSEXP, SEXP corrSEXP, SEXP n_subsimSEXP, SEXP antitheticSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::cube& >::type path(pathSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type vol(volSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type corr(corrSEXP);
    Rcpp::traits::input_parameter< const int& >::type n_subsim(n_subsimSEXP);
    Rcpp::traits::input_parameter< const bool& >::type antithetic(antitheticSEXP);
    rcpp_result_gen = Rcpp::wrap(NestedCGBM(path, mu, vol, corr, n_subsim, antithetic));
    return rcpp_result_gen;
END_RCPP
}
// TestPolicy
arma::vec TestPolicy(const int& start_position, const arma::cube& path, Rcpp::NumericVector control_, Rcpp::Function Reward_, Rcpp::Function Scrap_, const arma::ucube& path_action);
RcppExport SEXP rlsm_TestPolicy(SEXP start_positionSEXP, SEXP pathSEXP, SEXP control_SEXP, SEXP Reward_SEXP, SEXP Scrap_SEXP, SEXP path_actionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int& >::type start_position(start_positionSEXP);
    Rcpp::traits::input_parameter< const arma::cube& >::type path(pathSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type control_(control_SEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type Reward_(Reward_SEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type Scrap_(Scrap_SEXP);
    Rcpp::traits::input_parameter< const arma::ucube& >::type path_action(path_actionSEXP);
    rcpp_result_gen = Rcpp::wrap(TestPolicy(start_position, path, control_, Reward_, Scrap_, path_action));
    return rcpp_result_gen;
END_RCPP
}
// TestPolicy2
Rcpp::List TestPolicy2(const int& start_position, const arma::cube& path, Rcpp::NumericVector control_, Rcpp::Function Reward_, Rcpp::Function Scrap_, const arma::ucube& path_action);
RcppExport SEXP rlsm_TestPolicy2(SEXP start_positionSEXP, SEXP pathSEXP, SEXP control_SEXP, SEXP Reward_SEXP, SEXP Scrap_SEXP, SEXP path_actionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int& >::type start_position(start_positionSEXP);
    Rcpp::traits::input_parameter< const arma::cube& >::type path(pathSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type control_(control_SEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type Reward_(Reward_SEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type Scrap_(Scrap_SEXP);
    Rcpp::traits::input_parameter< const arma::ucube& >::type path_action(path_actionSEXP);
    rcpp_result_gen = Rcpp::wrap(TestPolicy2(start_position, path, control_, Reward_, Scrap_, path_action));
    return rcpp_result_gen;
END_RCPP
}
