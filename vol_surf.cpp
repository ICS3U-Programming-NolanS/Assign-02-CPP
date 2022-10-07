// Copyright (c) 2022 Nolan Shami All rights reserved.
//
// Created by: Nolan Shami
// Date: October 7th, 2022
// This program calculates and displays the volume and surface area
// of a parallelepiped.

int main() {
    float parallelepipedVolume;
    float parallelepipedSurfaceArea;
    float parallelepipedLength;
    float parallelepipedWidth;
    float parallelepipedHeight;
    std::cout << "What is the length of the parallelepiped?(cm): ";
    std::cin >> parallelepipedLength;
    std::cout << "What is the width of the parallelepiped?(cm): ";
    std::cin >> parallelepipedWidth;
    std::cout << "What is the height of the parallelepiped?(cm): ";
    std::cin >> parallelepipedHeight;
    parallelepipedVolume = parallelepipedLength * parallelepipedWidth *
                           parallelepipedHeight;
    parallelepipedSurfaceArea = 2 * parallelepipedLength * parallelepipedWidth + 2 * parallelepipedLength * parallelepipedHeight + 2 * parallelepipedHeight * parallelepipedWidth;
    std::cout << parallelepipedVolume << "cm^3" << std::endl;
    std::cout << parallelepipedSurfaceArea << "cm^2" << std::endl;
}
