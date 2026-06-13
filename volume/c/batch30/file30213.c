// fichero 30213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30213;

Registro30213 crear_registro30213(int id) {
    Registro30213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30213(Registro30213 r) {
    return r.valor + r.id;
}
