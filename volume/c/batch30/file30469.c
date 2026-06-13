// fichero 30469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30469;

Registro30469 crear_registro30469(int id) {
    Registro30469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30469(Registro30469 r) {
    return r.valor + r.id;
}
