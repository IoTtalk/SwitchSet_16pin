import DAN

ServerIP='https://DomainName' 
Comm_interval = 0.2 # unit:second

def profile_init():
    DAN.profile['dm_name']='SwitchSet16'
    DAN.profile['d_name']='16setX' 

def odf():  # int only
    return [
	    ('Switch-O1', 0, 'Switch-O1'),
        ('Switch-O2', 0, 'Switch-O2'),
        ('Switch-O3', 0, 'Switch-O3'),
        ('Switch-O4', 0, 'Switch-O4'),
        ('Switch-O5', 0, 'Switch-O5'),
        ('Switch-O6', 0, 'Switch-O6'),
        ('Switch-O7', 0, 'Switch-O7'),
        ('Switch-O8', 0, 'Switch-O8'),
        ('Switch-O9', 0, 'Switch-O9'),
        ('Switch-O10', 0, 'Switch-O10'),
        ('Switch-O11', 0, 'Switch-O11'),
        ('Switch-O12', 0, 'Switch-O12'),
        ('Switch-O13', 0, 'Switch-O13'),
        ('Switch-O14', 0, 'Switch-O14'),
        ('Switch-O15', 0, 'Switch-O15'),
        ('Switch-O16', 0, 'Switch-O16'),
        
    ]

def idf():
    return [
       #('A0', int),
       #('A1', int),
       #('A2', int),
       #('A3', int),
       #('A4', int),
       #('A5', int),
    ]
