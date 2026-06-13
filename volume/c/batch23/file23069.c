// fichero 23069 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23069;

Registro23069 crear_registro23069(int id) {
    Registro23069 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23069(Registro23069 r) {
    return r.valor + r.id;
}
