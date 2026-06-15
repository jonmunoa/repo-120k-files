// fichero 269 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro269;

Registro269 crear_registro269(int id) {
    Registro269 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
