// fichero 43453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43453;

Registro43453 crear_registro43453(int id) {
    Registro43453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
