// fichero 7493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7493;

Registro7493 crear_registro7493(int id) {
    Registro7493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7493(Registro7493 r) {
    return r.valor + r.id;
}
