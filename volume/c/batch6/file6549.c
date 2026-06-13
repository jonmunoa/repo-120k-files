// fichero 6549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6549;

Registro6549 crear_registro6549(int id) {
    Registro6549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6549(Registro6549 r) {
    return r.valor + r.id;
}
