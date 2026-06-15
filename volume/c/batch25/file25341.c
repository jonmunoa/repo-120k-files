// fichero 25341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25341;

Registro25341 crear_registro25341(int id) {
    Registro25341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
