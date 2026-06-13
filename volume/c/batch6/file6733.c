// fichero 6733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6733;

Registro6733 crear_registro6733(int id) {
    Registro6733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6733(Registro6733 r) {
    return r.valor + r.id;
}
