// fichero 20493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20493;

Registro20493 crear_registro20493(int id) {
    Registro20493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20493(Registro20493 r) {
    return r.valor + r.id;
}
