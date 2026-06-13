// fichero 23097 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23097;

Registro23097 crear_registro23097(int id) {
    Registro23097 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23097(Registro23097 r) {
    return r.valor + r.id;
}
