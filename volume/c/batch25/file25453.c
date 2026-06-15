// fichero 25453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25453;

Registro25453 crear_registro25453(int id) {
    Registro25453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
