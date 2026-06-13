// fichero 54485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54485;

Registro54485 crear_registro54485(int id) {
    Registro54485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54485(Registro54485 r) {
    return r.valor + r.id;
}
