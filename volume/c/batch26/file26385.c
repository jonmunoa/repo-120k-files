// fichero 26385 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26385;

Registro26385 crear_registro26385(int id) {
    Registro26385 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
