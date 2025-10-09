# 🔐 Secure Chat

A simple encrypted peer-to-peer chat application built using **C++**, **Qt**, and **OpenSSL**.
It allows two instances to exchange messages securely over TCP using asymmetric (RSA) and symmetric (AES) encryption.

---

## 🧩 Features

* Peer-to-peer encrypted messaging
* RSA public/private key pair for identity
* AES session encryption for chat
* Configurable host, port, and peer settings (`config.json`)
* Works locally (e.g., 127.0.0.1) or over LAN

---

## ⚙️ Requirements

Make sure the following packages are installed on your Linux system:

```bash
sudo apt update
sudo apt install -y build-essential cmake qt6-base-dev libssl-dev
```

---

## 🏗️ Build Instructions

1. **Clone or extract the project**

   ```bash
   cd ~/Downloads
   unzip secure-chat.zip -d secure-chat
   cd secure-chat
   ```

2. **Build the project**

   ```bash
   rm -rf build
   mkdir build
   cd build
   cmake ..
   make -j$(nproc)
   ```

   ✅ You should see the binary `securechat` inside `build/`.

---

## 📁 Setup Runtime Instances

Create two runtime folders to simulate two peers:

```bash
cd build
mkdir runA runB
```

Copy the keys and configuration files:

```bash
cp -r ../keys runA/
cp -r ../keys runB/
cp ../config.json runA/
cp ../config.json runB/
```

> If the `keys/` folder doesn’t exist, generate it manually using OpenSSL (see below).

---

## 🔑 Generate Keys (if missing)

Run these commands in the project root:

```bash
mkdir -p keys
openssl genrsa -out keys/my_private.key 2048
openssl rsa -in keys/my_private.key -pubout -out keys/my_public.key
```

Then copy these keys to each run folder:

```bash
cp -r keys build/runA/
cp -r keys build/runB/
```

---

## 🚀 Running Two Instances

Run both peers from the `build` directory:

```bash
( cd runA && ./securechat ) &
( cd runB && ./securechat ) &
```

Expected output:

```
[2025-10-08 19:42:12] System Connecting to 127.0.0.1:9002 ...
[2025-10-08 19:42:12] System Socket connected
```

Each instance will have its own chat window.
Type messages in one window — they’ll appear encrypted and delivered to the other.

---

## ⚙️ Configuration File (`config.json`)

Example:

```json
{
    "host": "127.0.0.1",
    "port": 9001,
    "peer_host": "127.0.0.1",
    "peer_port": 9002,
    "key_dir": "keys/"
}
```

Each instance can have a different port number but must point to the other’s `peer_port`.

---

## 🧠 Troubleshooting

* **“No such file or directory: securechat”**
  → Run `make` again inside `build/`.

* **“Error opening keys/peer_public.key”**
  → Ensure each instance has a valid `keys/` folder with both `my_private.key` and `my_public.key`.

* **Qt not found**
  → Install it: `sudo apt install qt6-base-dev`

---

## 📜 License

This project is provided for educational use.
You are free to modify and distribute it with attribution.

---

**Author:** Original source modified for Linux execution guide by Pritam Kumar
**Date:** October 2025
Cyber Security Project (July–Dec 2025).
