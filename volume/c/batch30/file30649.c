// fichero 30649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30649;

Registro30649 crear_registro30649(int id) {
    Registro30649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30649(Registro30649 r) {
    return r.valor + r.id;
}
