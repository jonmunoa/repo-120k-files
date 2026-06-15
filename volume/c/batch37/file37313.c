// fichero 37313 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37313;

Registro37313 crear_registro37313(int id) {
    Registro37313 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
