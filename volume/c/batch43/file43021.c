// fichero 43021 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43021;

Registro43021 crear_registro43021(int id) {
    Registro43021 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
