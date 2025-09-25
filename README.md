
SecureChat

SecureChat is a C++ based peer-to-peer encrypted chat application built using Qt, CMake, and Crypto++.
It demonstrates real-time secure messaging between two instances over sockets.

🚀 Features

End-to-end encryption using Crypto++

Peer-to-peer messaging with sockets

Cross-platform (Linux / macOS; portable to Windows)

Two terminal instances (Server & Client) simulate chatting

Modular design with CryptoHelper and networking components

📂 Project Structure
secure-chat/
│── CMakeLists.txt         # Build configuration
│── run.sh                 # Helper script to build & run
│── src/                   # Source code
│   ├── main.cpp
│   ├── CryptoHelper.cpp
│   └── ...
│── instances/             # Separate folders for chat instances
│   ├── instanceA/
│   └── instanceB/
│── build/                 # Build output (created automatically)

⚙️ Installation
1. Install Dependencies (macOS)
brew install cmake qt cryptopp

2. Clone Repository
git clone <repo-link>
cd secure-chat

3. Build the Project
chmod +x run.sh
./run.sh


This will:

Build the project with CMake

Launch two terminal windows (Instance A and Instance B)

💻 Usage

Instance A (Server)

Starts listening on a port (9001 by default)

Shows:

System Listening on 0.0.0.0:9001


Instance B (Client)

Connects to the server (127.0.0.1:9001)

Shows:

System Connecting to 127.0.0.1:9001
System Socket connected


Start Chatting

Type messages directly in the SecureChat terminal windows (not the normal shell prompt).

Example:

Hello from Server


→ Appears in the Client window.

Hi, this is Client


→ Appears in the Server window.

🎥 Demo Workflow

Run ./run.sh

Two terminal windows will open (Instance A = Server, Instance B = Client).

Type messages in one, see them appear in the other.

All communication is encrypted using Crypto++.

🔮 Future Improvements

GUI interface (Qt Widgets / QML)

Group chat (multiple clients)

File transfer support

Stronger encryption algorithms

👨‍💻 Author

Developed as part of Cyber Security Project (July–Dec 2025).
