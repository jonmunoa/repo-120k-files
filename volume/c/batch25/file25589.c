// fichero 25589 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25589;

Registro25589 crear_registro25589(int id) {
    Registro25589 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
