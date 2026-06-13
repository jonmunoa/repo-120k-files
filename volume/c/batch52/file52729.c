// fichero 52729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52729;

Registro52729 crear_registro52729(int id) {
    Registro52729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52729(Registro52729 r) {
    return r.valor + r.id;
}
