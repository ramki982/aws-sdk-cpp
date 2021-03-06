﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/inspector/InspectorRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Inspector
{
namespace Model
{

  /**
   */
  class AWS_INSPECTOR_API DescribeAssessmentTargetsRequest : public InspectorRequest
  {
  public:
    DescribeAssessmentTargetsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The ARNs that specifies the assessment targets that you want to describe.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssessmentTargetArns() const{ return m_assessmentTargetArns; }

    /**
     * <p>The ARNs that specifies the assessment targets that you want to describe.</p>
     */
    inline void SetAssessmentTargetArns(const Aws::Vector<Aws::String>& value) { m_assessmentTargetArnsHasBeenSet = true; m_assessmentTargetArns = value; }

    /**
     * <p>The ARNs that specifies the assessment targets that you want to describe.</p>
     */
    inline void SetAssessmentTargetArns(Aws::Vector<Aws::String>&& value) { m_assessmentTargetArnsHasBeenSet = true; m_assessmentTargetArns = std::move(value); }

    /**
     * <p>The ARNs that specifies the assessment targets that you want to describe.</p>
     */
    inline DescribeAssessmentTargetsRequest& WithAssessmentTargetArns(const Aws::Vector<Aws::String>& value) { SetAssessmentTargetArns(value); return *this;}

    /**
     * <p>The ARNs that specifies the assessment targets that you want to describe.</p>
     */
    inline DescribeAssessmentTargetsRequest& WithAssessmentTargetArns(Aws::Vector<Aws::String>&& value) { SetAssessmentTargetArns(std::move(value)); return *this;}

    /**
     * <p>The ARNs that specifies the assessment targets that you want to describe.</p>
     */
    inline DescribeAssessmentTargetsRequest& AddAssessmentTargetArns(const Aws::String& value) { m_assessmentTargetArnsHasBeenSet = true; m_assessmentTargetArns.push_back(value); return *this; }

    /**
     * <p>The ARNs that specifies the assessment targets that you want to describe.</p>
     */
    inline DescribeAssessmentTargetsRequest& AddAssessmentTargetArns(Aws::String&& value) { m_assessmentTargetArnsHasBeenSet = true; m_assessmentTargetArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The ARNs that specifies the assessment targets that you want to describe.</p>
     */
    inline DescribeAssessmentTargetsRequest& AddAssessmentTargetArns(const char* value) { m_assessmentTargetArnsHasBeenSet = true; m_assessmentTargetArns.push_back(value); return *this; }

  private:
    Aws::Vector<Aws::String> m_assessmentTargetArns;
    bool m_assessmentTargetArnsHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
