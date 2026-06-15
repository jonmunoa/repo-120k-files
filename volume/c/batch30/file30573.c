// fichero 30573 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30573;

Registro30573 crear_registro30573(int id) {
    Registro30573 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
