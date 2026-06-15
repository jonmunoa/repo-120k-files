// fichero 48677 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48677;

Registro48677 crear_registro48677(int id) {
    Registro48677 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
