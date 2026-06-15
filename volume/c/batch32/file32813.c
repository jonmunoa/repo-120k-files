// fichero 32813 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32813;

Registro32813 crear_registro32813(int id) {
    Registro32813 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
