// fichero 8469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8469;

Registro8469 crear_registro8469(int id) {
    Registro8469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8469(Registro8469 r) {
    return r.valor + r.id;
}
