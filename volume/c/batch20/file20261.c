// fichero 20261 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20261;

Registro20261 crear_registro20261(int id) {
    Registro20261 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
