// fichero 37893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37893;

Registro37893 crear_registro37893(int id) {
    Registro37893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37893(Registro37893 r) {
    return r.valor + r.id;
}
