// fichero 37357 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37357;

Registro37357 crear_registro37357(int id) {
    Registro37357 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
