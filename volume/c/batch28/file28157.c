// fichero 28157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28157;

Registro28157 crear_registro28157(int id) {
    Registro28157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28157(Registro28157 r) {
    return r.valor + r.id;
}
