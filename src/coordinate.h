// Copyright (c) 2018 ISciences, LLC.
// All rights reserved.
//
// This software is licensed under the Apache License, Version 2.0 (the "License").
// You may not use this file except in compliance with the License. You may
// obtain a copy of the License at http://www.apache.org/licenses/LICENSE-2.0.
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef COORDINATE_H
#define COORDINATE_H

#include <cmath>
#include <iostream>

namespace exactextract {

    struct Coordinate {
        double x;
        double y;

        Coordinate() {}

        Coordinate(double x, double y) : x{x}, y{y} {}

        bool equals(const Coordinate &other, double tol) const {
            return std::abs(other.x - x) < tol && std::abs(other.y - y) < tol;
        }

        bool operator==(const Coordinate &other) const {
            return x == other.x && y == other.y;
        }

        bool operator!=(const Coordinate &other) const {
            return !(*this == other);
        }
    };

    std::ostream &operator<<(std::ostream &os, const Coordinate &c);

}

#endif