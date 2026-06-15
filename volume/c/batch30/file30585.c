// fichero 30585 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30585;

Registro30585 crear_registro30585(int id) {
    Registro30585 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
