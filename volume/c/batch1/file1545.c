// fichero 1545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1545;

Registro1545 crear_registro1545(int id) {
    Registro1545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1545(Registro1545 r) {
    return r.valor + r.id;
}
