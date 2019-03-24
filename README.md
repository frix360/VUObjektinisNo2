#  Duomenų apdorojimas (2 užduotis)

## [Užduoties sąlyga](https://github.com/objprog/paskaitos2019/wiki/2-oji-užduotis)

## Paleidimas 

Naudojamas CMake, tad projekte rasite CMakeLists.txt failą, kurį su CMake galite subuildinti beveik visose aplinkose.

## Versijų istorija (changelog)

*Array implementaciją galima rasti atskirame branche. Jai taip pat išleistas realase'as*

### [v1.0](https://github.com/frix360/VUObjektinisNo2/releases/tag/v1.0) - (2019-03-24)

**Pakeitimai**

- Atsirado galimybė testuoti kontenerius pagal 3 stratagijas (trečioji - papildoma užduotis (resize))
- Ankstensnių realease'ų bugfixai ir optimizacijos 

**Programos spartos analizė naudojant skirtingus konteinerius (pagal tris strategijas):**

### 1 Strategija:

```
Testuojame 10 studentu  atskyrima kai kiekvienas studentas turi po 5 pazymius:
Operacija su Vector ivykdyta per 0
Irasymas ivykdytas per 0.0070067
Operacija su List ivykdyta per 0
Irasymas ivykdytas per 0.0030018
Operacija su Deque ivykdyta per 0
Irasymas ivykdytas per 0.0030028
Testuojame 100 studentu  atskyrima kai kiekvienas studentas turi po 5 pazymius:
Operacija su Vector ivykdyta per 0
Irasymas ivykdytas per 0.0080067
Operacija su List ivykdyta per 0.0010014
Irasymas ivykdytas per 0.0030031
Operacija su Deque ivykdyta per 0
Irasymas ivykdytas per 0.0040026
Testuojame 1000 studentu  atskyrima kai kiekvienas studentas turi po 5 pazymius:
Operacija su Vector ivykdyta per 0.0060059
Irasymas ivykdytas per 0.0290264
Operacija su List ivykdyta per 0.0050046
Irasymas ivykdytas per 0.0230211
Operacija su Deque ivykdyta per 0.0050046
Irasymas ivykdytas per 0.0280337
Testuojame 10000 studentu  atskyrima kai kiekvienas studentas turi po 5 pazymius:
Operacija su Vector ivykdyta per 0.047042
Irasymas ivykdytas per 0.227208
Operacija su List ivykdyta per 0.0480434
Irasymas ivykdytas per 0.13313
Operacija su Deque ivykdyta per 0.0450318
Irasymas ivykdytas per 0.239228
Testuojame 100000 studentu  atskyrima kai kiekvienas studentas turi po 5 pazymius:
Operacija su Vector ivykdyta per 0.473422
Irasymas ivykdytas per 2.56735
Operacija su List ivykdyta per 0.491438
Irasymas ivykdytas per 1.3072
Operacija su Deque ivykdyta per 0.454413
Irasymas ivykdytas per 2.72149
Testavimas baigtas
```

### 2 strategija:

```
Testuojame 10 studentu  atskyrima kai kiekvienas studentas turi po 5 pazymius:
Operacija su Vector ivykdyta per 0.001001
Irasymas ivykdytas per 0.007006
Operacija su List ivykdyta per 0
Irasymas ivykdytas per 0.0030032
Operacija su Deque ivykdyta per 0
Irasymas ivykdytas per 0.0020021
Testuojame 100 studentu  atskyrima kai kiekvienas studentas turi po 5 pazymius:
Operacija su Vector ivykdyta per 0.0010007
Irasymas ivykdytas per 0.0089998
Operacija su List ivykdyta per 0
Irasymas ivykdytas per 0.0040035
Operacija su Deque ivykdyta per 0.0010097
Irasymas ivykdytas per 0.0029942
Testuojame 1000 studentu  atskyrima kai kiekvienas studentas turi po 5 pazymius:
Operacija su Vector ivykdyta per 0.0050133
Irasymas ivykdytas per 0.0270246
Operacija su List ivykdyta per 0.0040036
Irasymas ivykdytas per 0.0220291
Operacija su Deque ivykdyta per 0.0160157
Irasymas ivykdytas per 0.0270144
Testuojame 10000 studentu  atskyrima kai kiekvienas studentas turi po 5 pazymius:
Operacija su Vector ivykdyta per 0.0450409
Irasymas ivykdytas per 0.226206
Operacija su List ivykdyta per 0.0480449
Irasymas ivykdytas per 0.133124
Operacija su Deque ivykdyta per 1.2201
Irasymas ivykdytas per 0.236215
Testuojame 100000 studentu  atskyrima kai kiekvienas studentas turi po 5 pazymius:
Operacija su Vector ivykdyta per 0.464423
Irasymas ivykdytas per 2.47825
Operacija su List ivykdyta per 0.411384
Irasymas ivykdytas per 1.28116
Operacija su Deque ivykdyta per 118.364
Irasymas ivykdytas per 2.60337
Testavimas baigtas
```

### 3 strategija:
```
Testuojame 10 studentu  atskyrima kai kiekvienas studentas turi po 5 pazymius:
Operacija su Vector ivykdyta per 0.0010013
Irasymas ivykdytas per 0.0070057
Operacija su List ivykdyta per 0
Irasymas ivykdytas per 0.0050046
Operacija su Deque ivykdyta per 0
Irasymas ivykdytas per 0.0050133
Testuojame 100 studentu  atskyrima kai kiekvienas studentas turi po 5 pazymius:
Operacija su Vector ivykdyta per 0.0020017
Irasymas ivykdytas per 0.0079981
Operacija su List ivykdyta per 0.0010013
Irasymas ivykdytas per 0.0060054
Operacija su Deque ivykdyta per 0
Irasymas ivykdytas per 0.0060053
Testuojame 1000 studentu  atskyrima kai kiekvienas studentas turi po 5 pazymius:
Operacija su Vector ivykdyta per 0.0930845
Irasymas ivykdytas per 0.0270246
Operacija su List ivykdyta per 0.0040123
Irasymas ivykdytas per 0.0220213
Operacija su Deque ivykdyta per 0.0050045
Irasymas ivykdytas per 0.0250217
Testuojame 10000 studentu  atskyrima kai kiekvienas studentas turi po 5 pazymius:
Operacija su Vector ivykdyta per 8.80902
Irasymas ivykdytas per 0.200192
Operacija su List ivykdyta per 0.0410271
Irasymas ivykdytas per 0.132129
Operacija su Deque ivykdyta per 0.0430316
Irasymas ivykdytas per 0.191182
Testuojame 100000 studentu  atskyrima kai kiekvienas studentas turi po 5 pazymius:
Operacija su Vector ivykdyta per 904.57
Irasymas ivykdytas per 2.07489
Operacija su List ivykdyta per 0.418372
Irasymas ivykdytas per 1.28916
Operacija su Deque ivykdyta per 0.453412
Irasymas ivykdytas per 2.10191
Testavimas baigtas
```


### [v0.5](https://github.com/frix360/VUObjektinisNo2/releases/tag/v0.5) - (2019-03-14)

**Pakeitimai**

- Pridėtas skirtingu kontenerių testavimas
- Ankstensnių realease'ų bugfixai ir optimizacijos 

**Programos spartos analizė naudojant skirtingus konteinerius**

*Kiekvienoje operacijoje studentas turi po 5 pažymius ( skliausteliuose pateiketas įrašymo į failus laikas)*  

```
Rezultatai:
Vector:  
10 studentų – 0 s ( 0.0160163 s )
100 studentų  - 0.0010001 s (0.0170161 s)
1000 studentu  -  0.0080067 s (0.0260258 s)
10000 studentų - 0.0600549 s (0.13312 s)
100000 studentų  -  0.728663 s (1.12403 s)

List: 
10 studentų – 0.0009995 s (0.0050045 s)
100 studentų  - 0.0010001 s (0.0070061 s)
1000 studentu  -  0.0080071 s ( 0.0280269 s)
10000 studentų - 0.0780718 s ( 0.139126 s)
100000 studentų  -  0.736669 s (1.14705 s)

Deque:  
10 studentų - 0.0010008 s ( 0.0030028 s )
100 studentų  - 0.0080074 s (0.0280269 s)
1000 studentu  -  0.0080067 s (0.0260258 s)
10000 studentų - 0.0630583 s (0.176161 s)
100000 studentų  -  0.378336 s (0.799728 s)
```


### [v0.4](https://github.com/frix360/VUObjektinisNo2/releases/tag/v0.4) - (2019-03-06)

**Pakeitimai**

- Atsirado galimybė kurti failus ir analizuoti programos veikimo laiką
- Ankstensnių realease'ų bugfixai ir optimizacijos 

**Programos spartos analizė** 

*Kiekvienoje operacijoje studentas turi po 5 pažymius*
```
10 studentų - 12 ms
100 studentų  - 13 ms
1000 studentu  - 35 ms
10000 studentų - 258 ms
100000 studentų  - 2845 ms
```

### [v0.3](https://github.com/frix360/VUObjektinisNo2/releases/tag/v0.3) - (2019-02-25)

**Pakeitimai**

- Pridėtas exception handlinimas
- Skaidymas į keletą failų


### [v0.2.1](https://github.com/frix360/VUObjektinisNo2/releases/tag/v0.2.1) - (2019-02-18)

**Pakeitimai**

- Refactorintas kodas
- Pataisytos saugumo spragos



### [v0.2](https://github.com/frix360/VUObjektinisNo2/releases/tag/v0.2) - (2019-02-17)

**Pakeitimai**

- Pridėta galimybė skaityti iš duomenų failo.

### [v0.1](https://github.com/frix360/VUObjektinisNo2/releases/tag/v0.1) - (2019-02-17)

- Pirmoji programos versija


