// Copyright (C) 2017 Alessandro Zito (zito.ales@gmail.com)
//
// This file is part of Fdakmapp.
//
// Fdakmapp is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Fdakmapp is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
//   You should have received a copy of the GNU General Public License
//   along with Fdakmapp.  If not, see <http://www.gnu.org/licenses/>.

#ifndef CHECK_IN_HPP
#define CHECK_IN_HPP

#include<RcppArmadillo.h>
#include "dissimilarity.h"
#include "warping.h"
#include "center_methods.h"
#include "optimizer.h"

void checkIn(const arma::mat& x,
             const arma::cube& y,
             const std::string warping_method,
             const std::string center_method,
             const std::string similarity_method,
             const std::string optim_method,
             const util::SharedFactory<WarpingFunction> warfac,
             const util::SharedFactory<Dissimilarity> disfac,
             const util::SharedFactory<CenterMethod> cenfac,
             const util::SharedFactory<OptimizerMethod> optfac,
             const arma::rowvec& warping_opt,
             const arma::rowvec& center_opt,
             const arma::urowvec par_opt,
             bool show_iter);
#endif
