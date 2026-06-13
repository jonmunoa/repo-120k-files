// fichero 24485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24485;

Registro24485 crear_registro24485(int id) {
    Registro24485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24485(Registro24485 r) {
    return r.valor + r.id;
}
