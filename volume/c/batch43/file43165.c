// fichero 43165 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43165;

Registro43165 crear_registro43165(int id) {
    Registro43165 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
