// fichero 37413 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37413;

Registro37413 crear_registro37413(int id) {
    Registro37413 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
