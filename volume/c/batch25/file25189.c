// fichero 25189 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25189;

Registro25189 crear_registro25189(int id) {
    Registro25189 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
