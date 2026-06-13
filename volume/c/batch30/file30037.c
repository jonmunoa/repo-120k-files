// fichero 30037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30037;

Registro30037 crear_registro30037(int id) {
    Registro30037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30037(Registro30037 r) {
    return r.valor + r.id;
}
