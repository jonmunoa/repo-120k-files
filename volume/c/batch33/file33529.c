// fichero 33529 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33529;

Registro33529 crear_registro33529(int id) {
    Registro33529 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
