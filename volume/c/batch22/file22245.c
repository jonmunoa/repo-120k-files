// fichero 22245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22245;

Registro22245 crear_registro22245(int id) {
    Registro22245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
