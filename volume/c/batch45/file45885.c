// fichero 45885 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45885;

Registro45885 crear_registro45885(int id) {
    Registro45885 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
