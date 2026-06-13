// fichero 29037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29037;

Registro29037 crear_registro29037(int id) {
    Registro29037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29037(Registro29037 r) {
    return r.valor + r.id;
}
