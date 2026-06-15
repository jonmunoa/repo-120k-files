// fichero 25349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25349;

Registro25349 crear_registro25349(int id) {
    Registro25349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
