// fichero 8377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8377;

Registro8377 crear_registro8377(int id) {
    Registro8377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8377(Registro8377 r) {
    return r.valor + r.id;
}
