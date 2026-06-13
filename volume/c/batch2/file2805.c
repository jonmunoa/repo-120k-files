// fichero 2805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2805;

Registro2805 crear_registro2805(int id) {
    Registro2805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2805(Registro2805 r) {
    return r.valor + r.id;
}
