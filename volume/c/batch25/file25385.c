// fichero 25385 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25385;

Registro25385 crear_registro25385(int id) {
    Registro25385 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
