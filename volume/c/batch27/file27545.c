// fichero 27545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27545;

Registro27545 crear_registro27545(int id) {
    Registro27545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27545(Registro27545 r) {
    return r.valor + r.id;
}
