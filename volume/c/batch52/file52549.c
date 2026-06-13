// fichero 52549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52549;

Registro52549 crear_registro52549(int id) {
    Registro52549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52549(Registro52549 r) {
    return r.valor + r.id;
}
