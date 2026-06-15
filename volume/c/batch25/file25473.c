// fichero 25473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25473;

Registro25473 crear_registro25473(int id) {
    Registro25473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
