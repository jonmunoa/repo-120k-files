// fichero 54545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54545;

Registro54545 crear_registro54545(int id) {
    Registro54545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54545(Registro54545 r) {
    return r.valor + r.id;
}
