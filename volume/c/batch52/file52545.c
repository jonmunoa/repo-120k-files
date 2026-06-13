// fichero 52545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52545;

Registro52545 crear_registro52545(int id) {
    Registro52545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52545(Registro52545 r) {
    return r.valor + r.id;
}
