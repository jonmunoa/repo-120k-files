// fichero 7597 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7597;

Registro7597 crear_registro7597(int id) {
    Registro7597 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
