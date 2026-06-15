// fichero 45357 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45357;

Registro45357 crear_registro45357(int id) {
    Registro45357 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
