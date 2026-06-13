// fichero 54529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54529;

Registro54529 crear_registro54529(int id) {
    Registro54529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54529(Registro54529 r) {
    return r.valor + r.id;
}
