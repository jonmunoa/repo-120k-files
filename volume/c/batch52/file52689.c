// fichero 52689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52689;

Registro52689 crear_registro52689(int id) {
    Registro52689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52689(Registro52689 r) {
    return r.valor + r.id;
}
