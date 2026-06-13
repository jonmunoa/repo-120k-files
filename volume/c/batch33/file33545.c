// fichero 33545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33545;

Registro33545 crear_registro33545(int id) {
    Registro33545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33545(Registro33545 r) {
    return r.valor + r.id;
}
