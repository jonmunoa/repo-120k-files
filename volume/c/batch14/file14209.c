// fichero 14209 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14209;

Registro14209 crear_registro14209(int id) {
    Registro14209 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
