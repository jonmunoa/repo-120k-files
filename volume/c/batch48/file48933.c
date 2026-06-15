// fichero 48933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48933;

Registro48933 crear_registro48933(int id) {
    Registro48933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
