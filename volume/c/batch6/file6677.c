// fichero 6677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6677;

Registro6677 crear_registro6677(int id) {
    Registro6677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6677(Registro6677 r) {
    return r.valor + r.id;
}
