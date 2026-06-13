// fichero 30117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30117;

Registro30117 crear_registro30117(int id) {
    Registro30117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30117(Registro30117 r) {
    return r.valor + r.id;
}
