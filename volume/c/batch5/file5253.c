// fichero 5253 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5253;

Registro5253 crear_registro5253(int id) {
    Registro5253 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
