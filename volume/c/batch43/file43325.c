// fichero 43325 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43325;

Registro43325 crear_registro43325(int id) {
    Registro43325 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
