// fichero 43545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43545;

Registro43545 crear_registro43545(int id) {
    Registro43545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43545(Registro43545 r) {
    return r.valor + r.id;
}
