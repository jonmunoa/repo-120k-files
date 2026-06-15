// fichero 25017 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25017;

Registro25017 crear_registro25017(int id) {
    Registro25017 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
