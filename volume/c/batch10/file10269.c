// fichero 10269 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10269;

Registro10269 crear_registro10269(int id) {
    Registro10269 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
