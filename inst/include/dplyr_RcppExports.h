// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef RCPP_dplyr_RCPPEXPORTS_H_GEN_
#define RCPP_dplyr_RCPPEXPORTS_H_GEN_

#include "dplyr_types.h"
#include <Rcpp.h>

namespace dplyr {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("dplyr", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("dplyr", "dplyr_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in dplyr");
            }
        }
    }

    inline SEXP get_date_classes() {
        typedef SEXP(*Ptr_get_date_classes)();
        static Ptr_get_date_classes p_get_date_classes = NULL;
        if (p_get_date_classes == NULL) {
            validateSignature("SEXP(*get_date_classes)()");
            p_get_date_classes = (Ptr_get_date_classes)R_GetCCallable("dplyr", "dplyr_get_date_classes");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_get_date_classes();
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<SEXP >(rcpp_result_gen);
    }

    inline SEXP get_time_classes() {
        typedef SEXP(*Ptr_get_time_classes)();
        static Ptr_get_time_classes p_get_time_classes = NULL;
        if (p_get_time_classes == NULL) {
            validateSignature("SEXP(*get_time_classes)()");
            p_get_time_classes = (Ptr_get_time_classes)R_GetCCallable("dplyr", "dplyr_get_time_classes");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_get_time_classes();
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<SEXP >(rcpp_result_gen);
    }

    inline DataFrame build_index_cpp(DataFrame data) {
        typedef SEXP(*Ptr_build_index_cpp)(SEXP);
        static Ptr_build_index_cpp p_build_index_cpp = NULL;
        if (p_build_index_cpp == NULL) {
            validateSignature("DataFrame(*build_index_cpp)(DataFrame)");
            p_build_index_cpp = (Ptr_build_index_cpp)R_GetCCallable("dplyr", "dplyr_build_index_cpp");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p_build_index_cpp(Shield<SEXP>(Rcpp::wrap(data)));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<DataFrame >(rcpp_result_gen);
    }

}

#endif // RCPP_dplyr_RCPPEXPORTS_H_GEN_
