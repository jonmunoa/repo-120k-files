// fichero 30673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30673;

Registro30673 crear_registro30673(int id) {
    Registro30673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30673(Registro30673 r) {
    return r.valor + r.id;
}
