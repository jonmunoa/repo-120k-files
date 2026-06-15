// fichero 30825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30825;

Registro30825 crear_registro30825(int id) {
    Registro30825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
