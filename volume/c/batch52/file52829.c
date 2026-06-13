// fichero 52829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52829;

Registro52829 crear_registro52829(int id) {
    Registro52829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52829(Registro52829 r) {
    return r.valor + r.id;
}
