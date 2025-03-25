# Capy AI Chatbot SDK for Unreal Engine

The Capy AI SDK allows you to quickly and effortlessly integrate a sophisticated AI-powered chatbot from Capy AI into your Unreal Engine project.

Video integration:
https://www.youtube.com/watch?v=SmPJ7oNqzHU&t=9s

## Features

- Seamlessly integrate a chatbot powered by Capy AI directly into your game or interactive experience.
- Easy-to-use Blueprint nodes for non-developers and C++ API for developers.
- Real-time messaging with an AI chatbot.
- Customizable UI widget provided for immediate integration.

## Prerequisites

- Unreal Engine 5.3 - 5.4
- An active Capy AI account (register at [Capy AI](https://capy-ai.com)).

## Installation

1. **Clone the repository** into your project's `Plugins` folder:

```bash
git clone https://github.com/Reejak/CapyAi-UnrealSdk
```

2. Open your Unreal Engine project. It will prompt you to rebuild modules if necessary.

## Quick Start

### Set up your Capy AI credentials

- Go to your Capy AI dashboard, copy your:
  - **Capy ID** (`AgentId`)
  - **Secret Key**

### Blueprint Integration

- Open your Unreal Engine project.
- Open any Blueprint and search for the following provided nodes:
  - `Create WBP Chat Widget`
  - `Send Message to Agent`
  - `Get Agent Information`

Example Blueprint setup:

- Use `Create WBP Chat Widget` node to initialize the chat widget by providing the `AgentId` and `Secret`.
- Connect the widget output to your game's UI.
- Use the provided "Send Message to Agent" node to communicate with your Capy AI chatbot in real-time.


## Example UI

The SDK includes a pre-designed Chat UI widget that you can directly use or customize to your needs:

https://pears-ai.com/images/game.png

## Support

If you encounter any issues or have questions, please:

- Open an issue on GitHub.
- Contact support through your Capy AI dashboard.

## License

Distributed under the MIT License. See `LICENSE` for more information.

