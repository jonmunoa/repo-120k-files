// fichero 37725 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37725;

Registro37725 crear_registro37725(int id) {
    Registro37725 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
