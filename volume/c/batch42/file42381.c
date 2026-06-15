// fichero 42381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42381;

Registro42381 crear_registro42381(int id) {
    Registro42381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
