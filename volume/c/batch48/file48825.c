// fichero 48825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48825;

Registro48825 crear_registro48825(int id) {
    Registro48825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
