// fichero 32097 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32097;

Registro32097 crear_registro32097(int id) {
    Registro32097 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
