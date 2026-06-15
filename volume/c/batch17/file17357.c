// fichero 17357 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17357;

Registro17357 crear_registro17357(int id) {
    Registro17357 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
