// fichero 30437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30437;

Registro30437 crear_registro30437(int id) {
    Registro30437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30437(Registro30437 r) {
    return r.valor + r.id;
}
