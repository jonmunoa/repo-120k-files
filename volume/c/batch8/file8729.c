// fichero 8729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8729;

Registro8729 crear_registro8729(int id) {
    Registro8729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8729(Registro8729 r) {
    return r.valor + r.id;
}
