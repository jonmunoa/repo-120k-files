// fichero 8665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8665;

Registro8665 crear_registro8665(int id) {
    Registro8665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8665(Registro8665 r) {
    return r.valor + r.id;
}
