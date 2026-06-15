// fichero 30253 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30253;

Registro30253 crear_registro30253(int id) {
    Registro30253 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
