// fichero 16813 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16813;

Registro16813 crear_registro16813(int id) {
    Registro16813 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
