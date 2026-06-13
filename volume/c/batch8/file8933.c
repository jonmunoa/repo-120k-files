// fichero 8933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8933;

Registro8933 crear_registro8933(int id) {
    Registro8933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8933(Registro8933 r) {
    return r.valor + r.id;
}
