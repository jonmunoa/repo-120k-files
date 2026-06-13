// fichero 29545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29545;

Registro29545 crear_registro29545(int id) {
    Registro29545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29545(Registro29545 r) {
    return r.valor + r.id;
}
