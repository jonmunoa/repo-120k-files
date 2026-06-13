// fichero 7677 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7677;

Registro7677 crear_registro7677(int id) {
    Registro7677 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7677(Registro7677 r) {
    return r.valor + r.id;
}
