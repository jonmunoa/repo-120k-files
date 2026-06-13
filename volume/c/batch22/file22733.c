// fichero 22733 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22733;

Registro22733 crear_registro22733(int id) {
    Registro22733 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22733(Registro22733 r) {
    return r.valor + r.id;
}
