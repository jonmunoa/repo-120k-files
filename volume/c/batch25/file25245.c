// fichero 25245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25245;

Registro25245 crear_registro25245(int id) {
    Registro25245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
