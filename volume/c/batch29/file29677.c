// fichero 29677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29677;

Registro29677 crear_registro29677(int id) {
    Registro29677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29677(Registro29677 r) {
    return r.valor + r.id;
}
