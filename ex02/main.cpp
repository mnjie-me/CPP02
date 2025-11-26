/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mari-cruz <mari-cruz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 10:54:07 by mari-cruz         #+#    #+#             */
/*   Updated: 2025/11/26 12:57:36 by mari-cruz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main() {

    std::cout << "================== Block 1: Constructors ==================" << std::endl;
    Fixed a;
    Fixed b(10);
    Fixed c(3.14f);
    Fixed d(b);
    std::cout << "a: " << a << "\nb: " << b << "\nc: " << c << "\nd: " << d << std::endl;

    std::cout << "\n================== Block 2: Arithmetic Operators ==================" << std::endl;
    Fixed e = b + c;
    Fixed f = b - c;
    Fixed g = b * c;
    Fixed h = b / c;
    std::cout << "b + c = " << e << std::endl;
    std::cout << "b - c = " << f << std::endl;
    std::cout << "b * c = " << g << std::endl;
    std::cout << "b / c = " << h << std::endl;

    std::cout << "\n================== Block 3: Comparisions ==================" << std::endl;
    std::cout << "b > c ? " << (b > c) << std::endl;
    std::cout << "b < c ? " << (b < c) << std::endl;
    std::cout << "b >= d ? " << (b >= d) << std::endl;
    std::cout << "b <= d ? " << (b <= d) << std::endl;
    std::cout << "b == d ? " << (b == d) << std::endl;
    std::cout << "b != d ? " << (b != d) << std::endl;

    std::cout << "\n================== Block 4: Increment / Decrement ==================" << std::endl;
    Fixed inc(0);
    std::cout << "inc: " << inc << std::endl;
    std::cout << "++inc: " << ++inc << std::endl;   // pre-increment
    std::cout << "inc: " << inc << std::endl;
    std::cout << "inc++: " << inc++ << std::endl;   // post-increment
    std::cout << "inc: " << inc << std::endl;
    std::cout << "--inc: " << --inc << std::endl;   // pre-decrement
    std::cout << "inc: " << inc << std::endl;
    std::cout << "inc--: " << inc-- << std::endl;   // post-decrement
    std::cout << "inc: " << inc << std::endl;

    std::cout << "\n================== Block 5: Min / Max ==================" << std::endl;
    Fixed x(2);
    Fixed y(3);
    std::cout << "x: " << x << ", y: " << y << std::endl;
    std::cout << "min(x, y): " << Fixed::min(x, y) << std::endl;
    std::cout << "max(x, y): " << Fixed::max(x, y) << std::endl;
    const Fixed cx(4);
    const Fixed cy(5);
    std::cout << "cx: " << cx << ", cy: " << cy << std::endl;
    std::cout << "min(cx, cy): " << Fixed::min(cx, cy) << std::endl;
    std::cout << "max(cx, cy): " << Fixed::max(cx, cy) << std::endl;
    return 0;
}