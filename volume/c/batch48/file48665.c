// fichero 48665 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48665;

Registro48665 crear_registro48665(int id) {
    Registro48665 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
