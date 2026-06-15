// fichero 18253 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18253;

Registro18253 crear_registro18253(int id) {
    Registro18253 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
