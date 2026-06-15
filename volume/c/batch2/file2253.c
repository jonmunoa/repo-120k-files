// fichero 2253 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2253;

Registro2253 crear_registro2253(int id) {
    Registro2253 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
