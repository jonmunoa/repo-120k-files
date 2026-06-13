// fichero 2449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2449;

Registro2449 crear_registro2449(int id) {
    Registro2449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2449(Registro2449 r) {
    return r.valor + r.id;
}
