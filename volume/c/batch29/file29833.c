// fichero 29833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29833;

Registro29833 crear_registro29833(int id) {
    Registro29833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
