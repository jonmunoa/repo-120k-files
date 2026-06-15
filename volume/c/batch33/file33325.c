// fichero 33325 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33325;

Registro33325 crear_registro33325(int id) {
    Registro33325 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
