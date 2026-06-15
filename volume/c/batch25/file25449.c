// fichero 25449 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25449;

Registro25449 crear_registro25449(int id) {
    Registro25449 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
