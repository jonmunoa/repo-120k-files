// fichero 28597 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28597;

Registro28597 crear_registro28597(int id) {
    Registro28597 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
