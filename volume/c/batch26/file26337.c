// fichero 26337 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26337;

Registro26337 crear_registro26337(int id) {
    Registro26337 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
