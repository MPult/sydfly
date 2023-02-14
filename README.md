<a name="readme-top"></a>
[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Issues][issues-shield]][issues-url]
[![MIT License][license-shield]][license-url]

<!-- PROJECT LOGO -->
<br />
<div align="center">
  <a href="https://github.com/mpult/sydfly">
  </a>

  <h3 align="center">Sydfly</h3>
  <h4> /syːd/ /flyːr/ </h4>
  <p align="center">
     LEDs for your PAX wardrobe, without the propriatary controller
    <!--<br />
    <a href="https://github.com/mpult/sydfly">View Demo</a>
    ·
    <a href="https://github.com/mpult/sydfly/issues">Report Bug</a>
    ·
    <a href="https://github.com/mpult/sydfly/issues">Request Feature</a>
  </p> -->
</div>


<!-- ABOUT THE PROJECT -->
## About The Project

<!-- [![Product Name Screen Shot][product-screenshot]](https://example.com) -->

I wanted to buy some LEDs, that turn off once I close the door, for my PAX wardrobe. Yet, the price tag convinced me to spend thousands in learning PCB design and creating my own. (No I'm not OK) 

Here's why you should use this:
* You value open-source over time efficiency
* You're a cheapskate
* You hate spending money on a product that actually fully works, so instead you make it yourself.

<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- GETTING STARTED -->
## Getting Started

Setting this up varies depending on how legit you want to make it: Own PCB? Or just on a breadboard?
### Parts list

Below is a list of parts required, each have their datasheet in the ``Datasheets`` folder. The links shown are for ``conrad.de``, I am not affiliated with them in any way.

| Count | Part No.                | Part Name                                                                                                                                       |
| ----- | ----------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------- |
| 1     | A000005                 | [Arduino Nano](https://www.conrad.de/de/p/arduino-board-nano-core-nano-atmega328-1172623.html)                                                  |
| 4     | DG350-3.5-03P-14-00AH-1 | [Degson Screw Terminal](https://www.conrad.de/de/p/degson-dg350-3-5-03p-14-00ah-1-schraubklemmblock-2-mm-polzahl-num-3-gruen-1-st-1327185.html) |
| 3     | IRLB8721PBF             | [N-Channel MOSFET](https://www.conrad.de/de/p/infineon-technologies-irlb8721pbf-mosfet-1-n-kanal-65-w-to-220ab-161166.html)                     |
### Breadboard

1. Flash the code from ``Arduino-Code`` on to the Arduino [Instructions](https://support.arduino.cc/hc/en-us/articles/4733418441116-Upload-a-sketch-in-Arduino-IDE)
2. Build the breadboard following the [schematics](./Own-Schematics/Schematics.pdf), proper breadboard diagrams will follow soon (feel free to contribute!)
3. Enjoy the project!

**Optional Steps:**
1. 3D-Print the case from the ``CAD`` folder
2. Add a 45° diffuser for the stylish look

<p align="right">(<a href="#readme-top">back to top</a>)</p>


### PCB Route

Okay so you're hardcore and want to make your own PCB.

You can either use the Gerber files from the release, or make your own. Instructions to make the gerber files will follow soon™
For the Docs well assume you use [jlcpcb.com](https://jlcpcb.com)
1. Upload the **zipped** Gerber files from the release.
2. Select the options you want, only really important is 2 layered PCB. Rest is all preference
3. Order and wait.
4. Solder the components to the board following the [board Diagram](./Own-Schematics/Board.pdf)
5. Flash the code from ``Arduino-Code`` on to the Arduino [Instructions](https://support.arduino.cc/hc/en-us/articles/4733418441116-Upload-a-sketch-in-Arduino-IDE)
6. Done!

**Optional Steps:**
1. 3D-Print the case from the ``CAD`` folder
2. Add a 45° diffuser for the stylish look

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- USAGE EXAMPLES -->
<!-- ## Usage

Use this space to show useful examples of how a project can be used. Additional screenshots, code examples and demos work well in this space. You may also link to more resources.

_For more examples, please refer to the [Documentation](https://example.com)_

<p align="right">(<a href="#readme-top">back to top</a>)</p>
 -->


<!-- ROADMAP -->
## Roadmap

- [x] New README
- [x] Create Release
- [ ] Add multithreading
- [ ] Add images to docs.

See the [open issues](https://github.com/mpult/sydfly/issues) for a full list of proposed features (and known issues).

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- CONTRIBUTING -->
## Contributing

Contributions are what make the open source community such an amazing place to learn, inspire, and create. Any contributions you make are **greatly appreciated**.

If you have a suggestion that would make this better, please fork the repo and create a pull request. You can also simply open an issue with the tag "enhancement".
Don't forget to give the project a star! Thanks again!

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- LICENSE -->
## License

Distributed under the MIT License. See `LICENSE` for more information.

<p align="right">(<a href="#readme-top">back to top</a>)</p>

<!-- ACKNOWLEDGMENTS -->
## Acknowledgments

Use this space to list resources you find helpful and would like to give credit to. I've included a few of my favorites to kick things off!

* [Choose an Open Source License](https://choosealicense.com)
* [Img Shields](https://shields.io)
* [Markdown Template](https://github.com/othneildrew/Best-README-Template)

<p align="right">(<a href="#readme-top">back to top</a>)</p>



<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/mpult/sydfly.svg?style=for-the-badge
[contributors-url]: https://github.com/mpult/sydfly/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/mpult/sydfly.svg?style=for-the-badge
[forks-url]: https://github.com/mpult/sydfly/network/members
[stars-shield]: https://img.shields.io/github/stars/mpult/sydfly.svg?style=for-the-badge
[stars-url]: https://github.com/mpult/sydfly/stargazers
[issues-shield]: https://img.shields.io/github/issues/mpult/sydfly.svg?style=for-the-badge
[issues-url]: https://github.com/mpult/sydfly/issues
[license-shield]: https://img.shields.io/github/license/mpult/sydfly.svg?style=for-the-badge
[license-url]: https://github.com/mpult/sydfly/blob/main/LICENSE
[product-screenshot]: images/screenshot.png
