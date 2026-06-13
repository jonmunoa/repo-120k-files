// fichero 32677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32677;

Registro32677 crear_registro32677(int id) {
    Registro32677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32677(Registro32677 r) {
    return r.valor + r.id;
}
