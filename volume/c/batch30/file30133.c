// fichero 30133 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30133;

Registro30133 crear_registro30133(int id) {
    Registro30133 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30133(Registro30133 r) {
    return r.valor + r.id;
}
