// fichero 26673 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26673;

Registro26673 crear_registro26673(int id) {
    Registro26673 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
