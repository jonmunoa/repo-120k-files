// fichero 2485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2485;

Registro2485 crear_registro2485(int id) {
    Registro2485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2485(Registro2485 r) {
    return r.valor + r.id;
}
