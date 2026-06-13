// fichero 30553 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30553;

Registro30553 crear_registro30553(int id) {
    Registro30553 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30553(Registro30553 r) {
    return r.valor + r.id;
}
