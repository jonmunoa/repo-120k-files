// fichero 32665 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32665;

Registro32665 crear_registro32665(int id) {
    Registro32665 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
