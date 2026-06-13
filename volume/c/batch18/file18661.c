// fichero 18661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18661;

Registro18661 crear_registro18661(int id) {
    Registro18661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18661(Registro18661 r) {
    return r.valor + r.id;
}
