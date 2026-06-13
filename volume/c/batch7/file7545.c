// fichero 7545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7545;

Registro7545 crear_registro7545(int id) {
    Registro7545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7545(Registro7545 r) {
    return r.valor + r.id;
}
