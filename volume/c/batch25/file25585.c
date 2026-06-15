// fichero 25585 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25585;

Registro25585 crear_registro25585(int id) {
    Registro25585 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
