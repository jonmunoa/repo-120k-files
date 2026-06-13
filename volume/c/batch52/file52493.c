// fichero 52493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52493;

Registro52493 crear_registro52493(int id) {
    Registro52493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52493(Registro52493 r) {
    return r.valor + r.id;
}
