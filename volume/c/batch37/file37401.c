// fichero 37401 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37401;

Registro37401 crear_registro37401(int id) {
    Registro37401 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
