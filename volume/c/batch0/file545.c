// fichero 545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro545;

Registro545 crear_registro545(int id) {
    Registro545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro545(Registro545 r) {
    return r.valor + r.id;
}
