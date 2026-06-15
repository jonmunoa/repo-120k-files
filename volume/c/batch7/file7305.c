// fichero 7305 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7305;

Registro7305 crear_registro7305(int id) {
    Registro7305 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
