// fichero 37213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37213;

Registro37213 crear_registro37213(int id) {
    Registro37213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
