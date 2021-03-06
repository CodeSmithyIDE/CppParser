/*
    Copyright (c) 2008-2017 Xavier Leclercq

    Permission is hereby granted, free of charge, to any person obtaining a
    copy of this software and associated documentation files (the "Software"),
    to deal in the Software without restriction, including without limitation
    the rights to use, copy, modify, merge, publish, distribute, sublicense,
    and/or sell copies of the Software, and to permit persons to whom the
    Software is furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in
    all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
    THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
    IN THE SOFTWARE.
*/

#include "PreprocessingToken.h"

namespace CodeSmithy
{
namespace Cpp
{

PreprocessingToken::PreprocessingToken(EType type)
    : m_type(type)
{
}

PreprocessingToken::~PreprocessingToken()
{
}

PreprocessingToken::EType PreprocessingToken::type() const
{
    return m_type;
}

const std::string& PreprocessingToken::text() const
{
    return m_text;
}

void PreprocessingToken::setText(const std::string& text)
{
    m_text = text;
}

void PreprocessingToken::write(std::ostream& output) const
{
    output.write(m_text.c_str(), m_text.size());
}

}
}
