// fichero 34493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34493;

Registro34493 crear_registro34493(int id) {
    Registro34493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34493(Registro34493 r) {
    return r.valor + r.id;
}
