// fichero 46545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46545;

Registro46545 crear_registro46545(int id) {
    Registro46545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46545(Registro46545 r) {
    return r.valor + r.id;
}
