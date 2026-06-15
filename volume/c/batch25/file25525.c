// fichero 25525 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25525;

Registro25525 crear_registro25525(int id) {
    Registro25525 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
