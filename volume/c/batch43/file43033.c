// fichero 43033 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43033;

Registro43033 crear_registro43033(int id) {
    Registro43033 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
