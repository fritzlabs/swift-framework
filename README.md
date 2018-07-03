Fritz Swift SDK
===============

[![Build Status](https://app.bitrise.io/app/dc5257678b56fb7b/status.svg?token=SKEIdD52UbujsZb4wsiCwQ&branch=master)](https://app.bitrise.io/app/dc5257678b56fb7b)
[![CocoaPods Compatible](https://img.shields.io/cocoapods/v/Fritz.svg)](https://img.shields.io/cocoapods/v/Fritz.svg)
[![Twitter](https://img.shields.io/badge/twitter-@fritzlabs-blue.svg?style=flat)](http://twitter.com/fritzlabs)

The Fritz SDK is used to provide insights into your use of Core ML models. Fritz provides seamless over-the-air updates to your models as well as analytics in how well your models are performing on your end-users devices.

## Documentation

[iOS SDK Reference Docs](https://docs.fritz.ai/iOS/latest/index.html)

[Docs Home](https://docs.fritz.ai/)

## Installation

### CocoaPods

[CocoaPods](http://cocoapods.org) is a dependency manager for Cocoa projects. You can install it with the following command:

```bash
$ gem install cocoapods
```

> CocoaPods 1.1.0+ is required to build Fritz 1.0.0+.

To integrate Fritz into your Xcode project using CocoaPods, add a line to your `Podfile`:

```
pod Fritz '~> 1.0.0-beta'
```


## Building a new version of the Framework

To simply build a new version of the Fritz framework, run the invoke command below. This will bump the sdk version and push new tags up to github.
```bash
$ inv update-version
```

If you wish to Bump the SDK version and build a new version of the framework, run:
```bash
$ inv update-version -b
```

To simply build the framework for a given tagged version, run:
```bash
$ inv build-swift-framework {version}
```

To install invoke locally:
```
$ pyenv virtualenv 3.6.3 swift-sdk
$ echo 'swift-sdk' > .python-version
$ pip install -r requirements.txt
```
