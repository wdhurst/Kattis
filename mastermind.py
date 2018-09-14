#!/usr/bin/env python
import requests, json, sys
# > {'numGladiators': 4, 'numGuesses': 8, 'numRounds': 1, 'numWeapons': 6}
# > {'response': [2, 1]}
headers = ""
def start_game():
    if sys.version_info < (3,0):
        sys.exit('Python version < 3.0 does not support modern TLS versions. You will have trouble connecting to our API using Python 2.X.')
    email = 'wdhurst@mavs.coloradomesa.edu' # Change this!
    r = requests.post('https://mastermind.praetorian.com/api-auth-token/', data={'email':email})
    r.json()
    # > {'Auth-Token': 'AUTH_TOKEN'}
    headers = r.json()
    headers['Content-Type'] = 'application/json'
    r = requests.get('https://mastermind.praetorian.com/level/1', headers=headers)
    r.json()


def send_guess(headers):
    num1,num2,num3,num4= map(int,input().split())
    r = requests.post('https://mastermind.praetorian.com/level/1', data=json.dumps({'guess':[num1,num2,num3,num4]}), headers=headers)
    r.json()
    
loop = 0
start_game()
while loop != 1:
    send_guess(headers)