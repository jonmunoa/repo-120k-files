// fichero 30245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30245;

Registro30245 crear_registro30245(int id) {
    Registro30245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
