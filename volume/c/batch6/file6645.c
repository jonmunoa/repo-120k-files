// fichero 6645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6645;

Registro6645 crear_registro6645(int id) {
    Registro6645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6645(Registro6645 r) {
    return r.valor + r.id;
}
