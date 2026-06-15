// fichero 45269 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45269;

Registro45269 crear_registro45269(int id) {
    Registro45269 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
