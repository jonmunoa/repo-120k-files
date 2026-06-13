// fichero 32549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32549;

Registro32549 crear_registro32549(int id) {
    Registro32549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32549(Registro32549 r) {
    return r.valor + r.id;
}
