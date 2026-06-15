// fichero 32133 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32133;

Registro32133 crear_registro32133(int id) {
    Registro32133 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
