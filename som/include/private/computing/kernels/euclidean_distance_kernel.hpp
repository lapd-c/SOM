/* Copyright 2018 Denis Silko. All rights reserved.
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at
 http:www.apache.org/licenses/LICENSE-2.0
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
*/

#ifndef euclidean_distance_kernel_hpp
#define euclidean_distance_kernel_hpp

#include "weight_distance_kernel.hpp"

namespace som {
    
    class EuclideanDistanceKernel : public WeightDistanceKernel {
        
    public:
        EuclideanDistanceKernel(cl_context &context, cl_command_queue &commandQueue, cl_device_id &deviceId);
        
    };
    
}

#endif /* euclidean_distance_kernel_hpp */
