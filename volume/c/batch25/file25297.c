// fichero 25297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25297;

Registro25297 crear_registro25297(int id) {
    Registro25297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
