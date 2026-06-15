// fichero 33357 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33357;

Registro33357 crear_registro33357(int id) {
    Registro33357 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
