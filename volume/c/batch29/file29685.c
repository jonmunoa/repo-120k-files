// fichero 29685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29685;

Registro29685 crear_registro29685(int id) {
    Registro29685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29685(Registro29685 r) {
    return r.valor + r.id;
}
