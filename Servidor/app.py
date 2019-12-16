import json

from flask import Flask, render_template, redirect, request, jsonify
from flask_socketio import SocketIO, send, emit
from flask_cors import CORS

app = Flask(__name__)
socketio = SocketIO(app)
CORS(app)
dados = ""


@app.route("/")
def rota_inicial():
    return "Oi Flask!!"
    

if __name__ == "__main__":
    app.run("0.0.0.0",port=8080)
