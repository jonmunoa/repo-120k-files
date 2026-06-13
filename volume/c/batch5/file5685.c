// fichero 5685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5685;

Registro5685 crear_registro5685(int id) {
    Registro5685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5685(Registro5685 r) {
    return r.valor + r.id;
}
