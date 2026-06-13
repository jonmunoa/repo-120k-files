// fichero 53841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53841;

Registro53841 crear_registro53841(int id) {
    Registro53841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53841(Registro53841 r) {
    return r.valor + r.id;
}
