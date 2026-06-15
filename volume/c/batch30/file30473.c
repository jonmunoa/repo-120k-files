// fichero 30473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30473;

Registro30473 crear_registro30473(int id) {
    Registro30473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
