// fichero 25921 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25921;

Registro25921 crear_registro25921(int id) {
    Registro25921 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
