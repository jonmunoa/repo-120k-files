// fichero 32885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32885;

Registro32885 crear_registro32885(int id) {
    Registro32885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
