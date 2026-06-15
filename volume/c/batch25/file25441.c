// fichero 25441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25441;

Registro25441 crear_registro25441(int id) {
    Registro25441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
