// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file RegionOfInterest.cpp
 * This source file contains the definition of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */
// 如果定义了_WIN32宏（通常用于Windows平台相关的条件编译）
#ifdef _WIN32
// 以下代码块用于移除Visual Studio中的链接器警告LNK4221
// 通过定义一个匿名命名空间，在其中声明一个未使用的变量dummy来达到此目的
// 匿名命名空间中的内容仅在当前编译单元内可见，可避免命名冲突等问题
// Remove linker warning LNK4221 on Visual Studio
namespace {
char dummy;
}  // namespace
#endif  // _WIN32
// 包含 RegionOfInterest.h 头文件，可能定义了 RegionOfInterest 相关的结构体、类等声明
#include "RegionOfInterest.h"
// 包含 fastcdr/Cdr.h 头文件，推测用于处理CDR（Common Data Representation）相关的功能，比如序列化、反序列化等操作
#include <fastcdr/Cdr.h>
// 包含 fastcdr/exceptions/BadParamException.h 头文件，用于处理 fastcdr 库中参数异常相关的情况
#include <fastcdr/exceptions/BadParamException.h>
// 使用 eprosima::fastcdr::exception 命名空间，这样后续可以直接使用该命名空间下的类型等，无需每次都写全限定名
using namespace eprosima::fastcdr::exception;
// 包含 <utility> 头文件，该头文件提供了一些实用的模板和工具函数等，在C++标准库中经常用到
#include <utility>
// 定义一个宏，表示 sensor_msgs::msg::RegionOfInterest 类型的最大CDR序列化类型大小为17字节（无符号长整型大小）
#define sensor_msgs_msg_RegionOfInterest_max_cdr_typesize 17ULL;
// 定义一个宏，表示 sensor_msgs::msg::RegionOfInterest 类型的最大CDR键序列化类型大小为0字节
#define sensor_msgs_msg_RegionOfInterest_max_key_cdr_typesize 0ULL;
// RegionOfInterest 类的默认构造函数定义
// 用于初始化 RegionOfInterest 类的对象，将各个成员变量初始化为默认值
sensor_msgs::msg::RegionOfInterest::RegionOfInterest()
{
    // 初始化成员变量 m_x_offset 为0，m_x_offset 类型可能为 unsigned long，用于表示某个偏移量（具体取决于业务逻辑）
    m_x_offset = 0;
    // 初始化成员变量 m_y_offset 为0，同样用于表示偏移量相关含义
    m_y_offset = 0;
    // 初始化成员变量 m_height 为0，可能用于表示区域的高度相关概念
    m_height = 0;
     // 初始化成员变量 m_width 为0，可能用于表示区域的宽度相关概念
    m_width = 0;
    // 初始化成员变量 m_do_rectify 为 false，可能用于指示是否进行某种校正操作（具体依业务而定）
    m_do_rectify = false;
}
// RegionOfInterest 类的析构函数定义
// 通常用于释放对象占用的资源等清理工作，但此处为空实现，可能意味着该类没有需要手动释放的资源
sensor_msgs::msg::RegionOfInterest::~RegionOfInterest()
{
}
// RegionOfInterest 类的拷贝构造函数定义
// 用于通过已有的 RegionOfInterest 对象 x 来创建一个新的对象，新对象的各成员变量值与 x 的对应成员变量值相同
sensor_msgs::msg::RegionOfInterest::RegionOfInterest(
        const RegionOfInterest& x)
{
    m_x_offset = x.m_x_offset;
    m_y_offset = x.m_y_offset;
    m_height = x.m_height;
    m_width = x.m_width;
    m_do_rectify = x.m_do_rectify;
}
// RegionOfInterest 类的移动构造函数定义
// 用于通过将已有的 RegionOfInterest 对象 x 的资源“移动”到新创建的对象中（通常涉及资源所有权的转移，且不进行深拷贝等开销较大的操作），新对象获取 x 的各成员变量值
// noexcept 表示该函数承诺不会抛出异常，有助于编译器进行一些优化等操作
sensor_msgs::msg::RegionOfInterest::RegionOfInterest(
        RegionOfInterest&& x) noexcept
{
    m_x_offset = x.m_x_offset;
    m_y_offset = x.m_y_offset;
    m_height = x.m_height;
    m_width = x.m_width;
    m_do_rectify = x.m_do_rectify;
}
// RegionOfInterest 类的拷贝赋值运算符重载函数定义
// 用于将一个 RegionOfInterest 对象 x 的各成员变量值赋值给当前对象（*this），使得当前对象的状态与 x 相同，最后返回当前对象的引用，以支持连续赋值操作
sensor_msgs::msg::RegionOfInterest& sensor_msgs::msg::RegionOfInterest::operator =(
        const RegionOfInterest& x)
{
    m_x_offset = x.m_x_offset;
    m_y_offset = x.m_y_offset;
    m_height = x.m_height;
    m_width = x.m_width;
    m_do_rectify = x.m_do_rectify;

    return *this;
}
// RegionOfInterest 类的移动赋值运算符重载函数定义
// 类似移动构造函数，将另一个 RegionOfInterest 对象 x 的资源“移动”到当前对象（*this）中，实现资源所有权的转移等操作，最后返回当前对象的引用
sensor_msgs::msg::RegionOfInterest& sensor_msgs::msg::RegionOfInterest::operator =(
        RegionOfInterest&& x) noexcept
{
    m_x_offset = x.m_x_offset;
    m_y_offset = x.m_y_offset;
    m_height = x.m_height;
    m_width = x.m_width;
    m_do_rectify = x.m_do_rectify;

    return *this;
}
// 重载相等运算符（==）函数定义
// 用于比较当前 RegionOfInterest 对象与另一个 RegionOfInterest 对象 x 是否相等，通过逐个比较各成员变量的值来确定是否相等，返回比较结果（true表示相等，false表示不等）
bool sensor_msgs::msg::RegionOfInterest::operator ==(
        const RegionOfInterest& x) const
{
    return (m_x_offset == x.m_x_offset && m_y_offset == x.m_y_offset && m_height == x.m_height && m_width == x.m_width && m_do_rectify == x.m_do_rectify);
}
// 重载不等运算符（!=）函数定义
// 通过调用相等运算符（==）取反的方式来判断当前对象与 x 是否不相等，返回比较结果（true表示不等，false表示相等）
bool sensor_msgs::msg::RegionOfInterest::operator !=(
        const RegionOfInterest& x) const
{
    return !(*this == x);
}
// 获取 RegionOfInterest 对象最大CDR序列化大小的函数定义
// 参数 current_alignment 可能用于表示当前的对齐方式等相关信息，但此处将其强制转换为 void 类型，表示未使用该参数
// 直接返回预定义的 sensor_msgs_msg_RegionOfInterest_max_cdr_typesize 作为最大序列化大小
size_t sensor_msgs::msg::RegionOfInterest::getMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return sensor_msgs_msg_RegionOfInterest_max_cdr_typesize;
}
// 获取 RegionOfInterest 对象实际CDR序列化大小的函数定义
// 参数 data 为要序列化的 RegionOfInterest 对象，current_alignment 用于处理对齐相关情况
// 函数内先记录初始的对齐值 initial_alignment，然后通过一系列计算（考虑了对齐要求以及各成员变量序列化所需空间）来更新 current_alignment
// 最后返回当前对齐值与初始对齐值的差值，即序列化该对象实际占用的空间大小
size_t sensor_msgs::msg::RegionOfInterest::getCdrSerializedSize(
        const sensor_msgs::msg::RegionOfInterest& data,
        size_t current_alignment)
{
    (void)data;
    size_t initial_alignment = current_alignment;
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    current_alignment += 4 + eprosima::fastcdr::Cdr::alignment(current_alignment, 4);
    current_alignment += 1 + eprosima::fastcdr::Cdr::alignment(current_alignment, 1);

    return current_alignment - initial_alignment;
}
// 对 RegionOfInterest 对象进行序列化的函数定义
// 参数 scdr 是一个 eprosima::fastcdr::Cdr 类型的对象，用于执行序列化操作，将当前 RegionOfInterest 对象的各成员变量依次序列化到 scdr 中
void sensor_msgs::msg::RegionOfInterest::serialize(
        eprosima::fastcdr::Cdr& scdr) const
{
    scdr << m_x_offset;
    scdr << m_y_offset;
    scdr << m_height;
    scdr << m_width;
    scdr << m_do_rectify;
}
// 对 RegionOfInterest 对象进行反序列化的函数定义
// 参数 dcdr 是一个 eprosima::fastcdr::Cdr 类型的对象，用于执行反序列化操作，从 dcdr 中依次读取数据并赋值给当前 RegionOfInterest 对象的各成员变量
void sensor_msgs::msg::RegionOfInterest::deserialize(
        eprosima::fastcdr::Cdr& dcdr)
{
    dcdr >> m_x_offset;
    dcdr >> m_y_offset;
    dcdr >> m_height;
    dcdr >> m_width;
    dcdr >> m_do_rectify;
}

/*!
 * @brief 此函数用于设置成员变量 x_offset 的值
 * @param _x_offset 要赋给成员变量 m_x_offset 的新值
 */
void sensor_msgs::msg::RegionOfInterest::x_offset(
        uint32_t _x_offset)
{
    m_x_offset = _x_offset;
}

/*!
 * @brief 此函数用于返回成员变量 x_offset 的值
 * @return 成员变量 m_x_offset 的当前值
 */
uint32_t sensor_msgs::msg::RegionOfInterest::x_offset() const
{
    return m_x_offset;
}

/*!
 * @brief 此函数用于返回成员变量 x_offset 的引用
 * @return 成员变量 m_x_offset 的引用，可用于在外部直接修改该成员变量的值
 */
uint32_t& sensor_msgs::msg::RegionOfInterest::x_offset()
{
    return m_x_offset;
}

/*!
 * @brief 此函数用于设置成员变量 y_offset 的值
 * @param _y_offset 要赋给成员变量 m_y_offset 的新值
 */
void sensor_msgs::msg::RegionOfInterest::y_offset(
        uint32_t _y_offset)
{
    m_y_offset = _y_offset;
}

/*!
 * @brief 此函数用于返回成员变量 y_offset 的值
 * @return 成员变量 m_y_offset 的当前值
 */
uint32_t sensor_msgs::msg::RegionOfInterest::y_offset() const
{
    return m_y_offset;
}

/*!
 * @brief 此函数用于返回成员变量 y_offset 的引用
 * @return 成员变量 m_y_offset 的引用，可用于在外部直接修改该成员变量的值
 */
uint32_t& sensor_msgs::msg::RegionOfInterest::y_offset()
{
    return m_y_offset;
}

/*!
 * @brief 此函数用于设置成员变量 height 的值
 * @param _height 要赋给成员变量 m_height 的新值
 */
void sensor_msgs::msg::RegionOfInterest::height(
        uint32_t _height)
{
    m_height = _height;
}

/*!
 * @brief 此函数用于返回成员变量 height 的值
 * @return 成员变量 m_height 的当前值
 */
uint32_t sensor_msgs::msg::RegionOfInterest::height() const
{
    return m_height;
}

/*!
 * @brief 此函数用于返回成员变量 height 的引用
 * @return 成员变量 m_height 的引用，可用于在外部直接修改该成员变量的值
 */
uint32_t& sensor_msgs::msg::RegionOfInterest::height()
{
    return m_height;
}

/*!
 * @brief 此函数用于设置成员变量 width 的值
 * @param _width 要赋给成员变量 m_width 的新值
 */
void sensor_msgs::msg::RegionOfInterest::width(
        uint32_t _width)
{
    m_width = _width;
}

/*!
 * @brief 此函数用于返回成员变量 width 的值
 * @return 成员变量 m_width 的当前值
 */
uint32_t sensor_msgs::msg::RegionOfInterest::width() const
{
    return m_width;
}

/*!
 * @brief 此函数用于返回成员变量 width 的引用
 * @return 成员变量 m_width 的引用，可用于在外部直接修改该成员变量的值
 */
uint32_t& sensor_msgs::msg::RegionOfInterest::width()
{
    return m_width;
}

/*!
 * @brief 此函数用于设置成员变量 do_rectify 的值
 * @param _do_rectify 要赋给成员变量 m_do_rectify 的新值
 */
void sensor_msgs::msg::RegionOfInterest::do_rectify(
        bool _do_rectify)
{
    m_do_rectify = _do_rectify;
}

/*!
 * @brief 此函数用于返回成员变量 do_rectify 的值
 * @return 成员变量 m_do_rectify 的当前值
 */
bool sensor_msgs::msg::RegionOfInterest::do_rectify() const
{
    return m_do_rectify;
}

/*!
 * @brief 此函数用于返回成员变量 do_rectify 的引用
 * @return 成员变量 m_do_rectify 的引用，可用于在外部直接修改该成员变量的值
 */
bool& sensor_msgs::msg::RegionOfInterest::do_rectify()
{
    return m_do_rectify;
}
// 获取 RegionOfInterest 对象键的最大CDR序列化大小的函数定义
// 类似前面获取对象最大CDR序列化大小的函数，此处忽略传入的 current_alignment 参数，直接返回预定义的键最大序列化大小
size_t sensor_msgs::msg::RegionOfInterest::getKeyMaxCdrSerializedSize(
        size_t current_alignment)
{
    static_cast<void>(current_alignment);
    return sensor_msgs_msg_RegionOfInterest_max_key_cdr_typesize;
}
// 判断 RegionOfInterest 对象的键是否已定义的函数定义
// 此处直接返回 false，表示键未定义，具体是否符合业务逻辑需结合实际情况判断
bool sensor_msgs::msg::RegionOfInterest::isKeyDefined()
{
    return false;
}
// 对 RegionOfInterest 对象的键进行序列化的函数定义
// 参数 scdr 为序列化相关对象，但此处直接将其忽略（通过(void) scdr 语句），可能意味着该对象的键不需要进行实际的序列化操作，具体取决于业务逻辑
void sensor_msgs::msg::RegionOfInterest::serializeKey(
        eprosima::fastcdr::Cdr& scdr) const
{
    (void) scdr;
}
