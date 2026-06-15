// fichero 25273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25273;

Registro25273 crear_registro25273(int id) {
    Registro25273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
