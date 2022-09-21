// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/squat.h"
#include "../inst/include/squat_types.h"
#include <RcppArmadillo.h>
#include <RcppEigen.h>
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// resample_qts
Rcpp::DataFrame resample_qts(const Rcpp::DataFrame& qts, double tmin, double tmax, const unsigned int nout, const bool disable_normalization);
static SEXP _squat_resample_qts_try(SEXP qtsSEXP, SEXP tminSEXP, SEXP tmaxSEXP, SEXP noutSEXP, SEXP disable_normalizationSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type qts(qtsSEXP);
    Rcpp::traits::input_parameter< double >::type tmin(tminSEXP);
    Rcpp::traits::input_parameter< double >::type tmax(tmaxSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type nout(noutSEXP);
    Rcpp::traits::input_parameter< const bool >::type disable_normalization(disable_normalizationSEXP);
    rcpp_result_gen = Rcpp::wrap(resample_qts(qts, tmin, tmax, nout, disable_normalization));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _squat_resample_qts(SEXP qtsSEXP, SEXP tminSEXP, SEXP tmaxSEXP, SEXP noutSEXP, SEXP disable_normalizationSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_squat_resample_qts_try(qtsSEXP, tminSEXP, tmaxSEXP, noutSEXP, disable_normalizationSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// smooth_qts
Rcpp::DataFrame smooth_qts(const Rcpp::DataFrame& qts, const double alpha);
static SEXP _squat_smooth_qts_try(SEXP qtsSEXP, SEXP alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type qts(qtsSEXP);
    Rcpp::traits::input_parameter< const double >::type alpha(alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(smooth_qts(qts, alpha));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _squat_smooth_qts(SEXP qtsSEXP, SEXP alphaSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_squat_smooth_qts_try(qtsSEXP, alphaSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// GeodesicQuaternionDistance
double GeodesicQuaternionDistance(const Rcpp::NumericMatrix& M1, const Rcpp::NumericMatrix& M2, const unsigned int index1, const unsigned int index2);
static SEXP _squat_GeodesicQuaternionDistance_try(SEXP M1SEXP, SEXP M2SEXP, SEXP index1SEXP, SEXP index2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type M1(M1SEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type M2(M2SEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type index1(index1SEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type index2(index2SEXP);
    rcpp_result_gen = Rcpp::wrap(GeodesicQuaternionDistance(M1, M2, index1, index2));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _squat_GeodesicQuaternionDistance(SEXP M1SEXP, SEXP M2SEXP, SEXP index1SEXP, SEXP index2SEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_squat_GeodesicQuaternionDistance_try(M1SEXP, M2SEXP, index1SEXP, index2SEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// RegularizeGrid
Rcpp::NumericMatrix RegularizeGrid(const Rcpp::NumericVector& grid, const Rcpp::NumericMatrix& values, const double gridLowerBound, const double gridUpperBound, const unsigned int numberOfPoints);
static SEXP _squat_RegularizeGrid_try(SEXP gridSEXP, SEXP valuesSEXP, SEXP gridLowerBoundSEXP, SEXP gridUpperBoundSEXP, SEXP numberOfPointsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type grid(gridSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type values(valuesSEXP);
    Rcpp::traits::input_parameter< const double >::type gridLowerBound(gridLowerBoundSEXP);
    Rcpp::traits::input_parameter< const double >::type gridUpperBound(gridUpperBoundSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type numberOfPoints(numberOfPointsSEXP);
    rcpp_result_gen = Rcpp::wrap(RegularizeGrid(grid, values, gridLowerBound, gridUpperBound, numberOfPoints));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _squat_RegularizeGrid(SEXP gridSEXP, SEXP valuesSEXP, SEXP gridLowerBoundSEXP, SEXP gridUpperBoundSEXP, SEXP numberOfPointsSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_squat_RegularizeGrid_try(gridSEXP, valuesSEXP, gridLowerBoundSEXP, gridUpperBoundSEXP, numberOfPointsSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// GetGeodesicMean
Rcpp::NumericMatrix GetGeodesicMean(const Rcpp::NumericMatrix& values);
static SEXP _squat_GetGeodesicMean_try(SEXP valuesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type values(valuesSEXP);
    rcpp_result_gen = Rcpp::wrap(GetGeodesicMean(values));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _squat_GetGeodesicMean(SEXP valuesSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_squat_GetGeodesicMean_try(valuesSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// reorient_qts_impl
Rcpp::DataFrame reorient_qts_impl(const Rcpp::DataFrame& qts);
RcppExport SEXP _squat_reorient_qts_impl(SEXP qtsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type qts(qtsSEXP);
    rcpp_result_gen = Rcpp::wrap(reorient_qts_impl(qts));
    return rcpp_result_gen;
END_RCPP
}
// normalize_qts_impl
Rcpp::DataFrame normalize_qts_impl(const Rcpp::DataFrame& qts);
RcppExport SEXP _squat_normalize_qts_impl(SEXP qtsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type qts(qtsSEXP);
    rcpp_result_gen = Rcpp::wrap(normalize_qts_impl(qts));
    return rcpp_result_gen;
END_RCPP
}
// derivative_qts_impl
Rcpp::DataFrame derivative_qts_impl(const Rcpp::DataFrame& qts);
RcppExport SEXP _squat_derivative_qts_impl(SEXP qtsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type qts(qtsSEXP);
    rcpp_result_gen = Rcpp::wrap(derivative_qts_impl(qts));
    return rcpp_result_gen;
END_RCPP
}
// log_qts_impl
Rcpp::DataFrame log_qts_impl(const Rcpp::DataFrame& qts);
RcppExport SEXP _squat_log_qts_impl(SEXP qtsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type qts(qtsSEXP);
    rcpp_result_gen = Rcpp::wrap(log_qts_impl(qts));
    return rcpp_result_gen;
END_RCPP
}
// exp_qts_impl
Rcpp::DataFrame exp_qts_impl(const Rcpp::DataFrame& qts);
RcppExport SEXP _squat_exp_qts_impl(SEXP qtsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type qts(qtsSEXP);
    rcpp_result_gen = Rcpp::wrap(exp_qts_impl(qts));
    return rcpp_result_gen;
END_RCPP
}
// centring_qts_impl
Rcpp::List centring_qts_impl(const Rcpp::DataFrame& qts, const bool standardize);
RcppExport SEXP _squat_centring_qts_impl(SEXP qtsSEXP, SEXP standardizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type qts(qtsSEXP);
    Rcpp::traits::input_parameter< const bool >::type standardize(standardizeSEXP);
    rcpp_result_gen = Rcpp::wrap(centring_qts_impl(qts, standardize));
    return rcpp_result_gen;
END_RCPP
}
// GetCostMatrix
Rcpp::NumericMatrix GetCostMatrix(const Rcpp::DataFrame& qts1, const Rcpp::DataFrame& qts2);
RcppExport SEXP _squat_GetCostMatrix(SEXP qts1SEXP, SEXP qts2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type qts1(qts1SEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type qts2(qts2SEXP);
    rcpp_result_gen = Rcpp::wrap(GetCostMatrix(qts1, qts2));
    return rcpp_result_gen;
END_RCPP
}
// mean_qts_impl
Rcpp::DataFrame mean_qts_impl(const Rcpp::List& qts_list);
RcppExport SEXP _squat_mean_qts_impl(SEXP qts_listSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type qts_list(qts_listSEXP);
    rcpp_result_gen = Rcpp::wrap(mean_qts_impl(qts_list));
    return rcpp_result_gen;
END_RCPP
}
// median_qts_impl
Rcpp::DataFrame median_qts_impl(const Rcpp::List& qts_list);
RcppExport SEXP _squat_median_qts_impl(SEXP qts_listSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type qts_list(qts_listSEXP);
    rcpp_result_gen = Rcpp::wrap(median_qts_impl(qts_list));
    return rcpp_result_gen;
END_RCPP
}
// qts2dts_impl
Rcpp::DataFrame qts2dts_impl(const Rcpp::DataFrame& first_qts, const Rcpp::DataFrame& second_qts);
RcppExport SEXP _squat_qts2dts_impl(SEXP first_qtsSEXP, SEXP second_qtsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type first_qts(first_qtsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type second_qts(second_qtsSEXP);
    rcpp_result_gen = Rcpp::wrap(qts2dts_impl(first_qts, second_qts));
    return rcpp_result_gen;
END_RCPP
}
// qts2nts_impl
Rcpp::DataFrame qts2nts_impl(const Rcpp::DataFrame& qts, const bool disable_normalization);
RcppExport SEXP _squat_qts2nts_impl(SEXP qtsSEXP, SEXP disable_normalizationSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type qts(qtsSEXP);
    Rcpp::traits::input_parameter< const bool >::type disable_normalization(disable_normalizationSEXP);
    rcpp_result_gen = Rcpp::wrap(qts2nts_impl(qts, disable_normalization));
    return rcpp_result_gen;
END_RCPP
}
// qts2ats_impl
Rcpp::DataFrame qts2ats_impl(const Rcpp::DataFrame& qts, const bool disable_normalization);
RcppExport SEXP _squat_qts2ats_impl(SEXP qtsSEXP, SEXP disable_normalizationSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type qts(qtsSEXP);
    Rcpp::traits::input_parameter< const bool >::type disable_normalization(disable_normalizationSEXP);
    rcpp_result_gen = Rcpp::wrap(qts2ats_impl(qts, disable_normalization));
    return rcpp_result_gen;
END_RCPP
}
// qts2avts_impl
Rcpp::DataFrame qts2avts_impl(const Rcpp::DataFrame& qts, const bool body_frame);
RcppExport SEXP _squat_qts2avts_impl(SEXP qtsSEXP, SEXP body_frameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame& >::type qts(qtsSEXP);
    Rcpp::traits::input_parameter< const bool >::type body_frame(body_frameSEXP);
    rcpp_result_gen = Rcpp::wrap(qts2avts_impl(qts, body_frame));
    return rcpp_result_gen;
END_RCPP
}
// gmean
Eigen::VectorXd gmean(const std::vector<Eigen::VectorXd>& quaternionSample, unsigned int maxIterations, double maxEpsilon);
static SEXP _squat_gmean_try(SEXP quaternionSampleSEXP, SEXP maxIterationsSEXP, SEXP maxEpsilonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const std::vector<Eigen::VectorXd>& >::type quaternionSample(quaternionSampleSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type maxIterations(maxIterationsSEXP);
    Rcpp::traits::input_parameter< double >::type maxEpsilon(maxEpsilonSEXP);
    rcpp_result_gen = Rcpp::wrap(gmean(quaternionSample, maxIterations, maxEpsilon));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _squat_gmean(SEXP quaternionSampleSEXP, SEXP maxIterationsSEXP, SEXP maxEpsilonSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_squat_gmean_try(quaternionSampleSEXP, maxIterationsSEXP, maxEpsilonSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// gmedian
Eigen::VectorXd gmedian(const std::vector<Eigen::VectorXd>& quaternionSample, unsigned int maxIterations, double maxEpsilon);
static SEXP _squat_gmedian_try(SEXP quaternionSampleSEXP, SEXP maxIterationsSEXP, SEXP maxEpsilonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const std::vector<Eigen::VectorXd>& >::type quaternionSample(quaternionSampleSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type maxIterations(maxIterationsSEXP);
    Rcpp::traits::input_parameter< double >::type maxEpsilon(maxEpsilonSEXP);
    rcpp_result_gen = Rcpp::wrap(gmedian(quaternionSample, maxIterations, maxEpsilon));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _squat_gmedian(SEXP quaternionSampleSEXP, SEXP maxIterationsSEXP, SEXP maxEpsilonSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_squat_gmedian_try(quaternionSampleSEXP, maxIterationsSEXP, maxEpsilonSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}

// validate (ensure exported C++ functions exist before calling them)
static int _squat_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("Rcpp::DataFrame(*resample_qts)(const Rcpp::DataFrame&,double,double,const unsigned int,const bool)");
        signatures.insert("Rcpp::DataFrame(*smooth_qts)(const Rcpp::DataFrame&,const double)");
        signatures.insert("double(*GeodesicQuaternionDistance)(const Rcpp::NumericMatrix&,const Rcpp::NumericMatrix&,const unsigned int,const unsigned int)");
        signatures.insert("Rcpp::NumericMatrix(*RegularizeGrid)(const Rcpp::NumericVector&,const Rcpp::NumericMatrix&,const double,const double,const unsigned int)");
        signatures.insert("Rcpp::NumericMatrix(*GetGeodesicMean)(const Rcpp::NumericMatrix&)");
        signatures.insert("Eigen::VectorXd(*gmean)(const std::vector<Eigen::VectorXd>&,unsigned int,double)");
        signatures.insert("Eigen::VectorXd(*gmedian)(const std::vector<Eigen::VectorXd>&,unsigned int,double)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _squat_RcppExport_registerCCallable() { 
    R_RegisterCCallable("squat", "_squat_resample_qts", (DL_FUNC)_squat_resample_qts_try);
    R_RegisterCCallable("squat", "_squat_smooth_qts", (DL_FUNC)_squat_smooth_qts_try);
    R_RegisterCCallable("squat", "_squat_GeodesicQuaternionDistance", (DL_FUNC)_squat_GeodesicQuaternionDistance_try);
    R_RegisterCCallable("squat", "_squat_RegularizeGrid", (DL_FUNC)_squat_RegularizeGrid_try);
    R_RegisterCCallable("squat", "_squat_GetGeodesicMean", (DL_FUNC)_squat_GetGeodesicMean_try);
    R_RegisterCCallable("squat", "_squat_gmean", (DL_FUNC)_squat_gmean_try);
    R_RegisterCCallable("squat", "_squat_gmedian", (DL_FUNC)_squat_gmedian_try);
    R_RegisterCCallable("squat", "_squat_RcppExport_validate", (DL_FUNC)_squat_RcppExport_validate);
    return R_NilValue;
}

static const R_CallMethodDef CallEntries[] = {
    {"_squat_resample_qts", (DL_FUNC) &_squat_resample_qts, 5},
    {"_squat_smooth_qts", (DL_FUNC) &_squat_smooth_qts, 2},
    {"_squat_GeodesicQuaternionDistance", (DL_FUNC) &_squat_GeodesicQuaternionDistance, 4},
    {"_squat_RegularizeGrid", (DL_FUNC) &_squat_RegularizeGrid, 5},
    {"_squat_GetGeodesicMean", (DL_FUNC) &_squat_GetGeodesicMean, 1},
    {"_squat_reorient_qts_impl", (DL_FUNC) &_squat_reorient_qts_impl, 1},
    {"_squat_normalize_qts_impl", (DL_FUNC) &_squat_normalize_qts_impl, 1},
    {"_squat_derivative_qts_impl", (DL_FUNC) &_squat_derivative_qts_impl, 1},
    {"_squat_log_qts_impl", (DL_FUNC) &_squat_log_qts_impl, 1},
    {"_squat_exp_qts_impl", (DL_FUNC) &_squat_exp_qts_impl, 1},
    {"_squat_centring_qts_impl", (DL_FUNC) &_squat_centring_qts_impl, 2},
    {"_squat_GetCostMatrix", (DL_FUNC) &_squat_GetCostMatrix, 2},
    {"_squat_mean_qts_impl", (DL_FUNC) &_squat_mean_qts_impl, 1},
    {"_squat_median_qts_impl", (DL_FUNC) &_squat_median_qts_impl, 1},
    {"_squat_qts2dts_impl", (DL_FUNC) &_squat_qts2dts_impl, 2},
    {"_squat_qts2nts_impl", (DL_FUNC) &_squat_qts2nts_impl, 2},
    {"_squat_qts2ats_impl", (DL_FUNC) &_squat_qts2ats_impl, 2},
    {"_squat_qts2avts_impl", (DL_FUNC) &_squat_qts2avts_impl, 2},
    {"_squat_gmean", (DL_FUNC) &_squat_gmean, 3},
    {"_squat_gmedian", (DL_FUNC) &_squat_gmedian, 3},
    {"_squat_RcppExport_registerCCallable", (DL_FUNC) &_squat_RcppExport_registerCCallable, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_squat(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
