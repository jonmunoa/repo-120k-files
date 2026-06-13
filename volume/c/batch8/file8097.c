// fichero 8097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8097;

Registro8097 crear_registro8097(int id) {
    Registro8097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8097(Registro8097 r) {
    return r.valor + r.id;
}
