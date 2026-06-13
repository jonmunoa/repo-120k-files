// fichero 27493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27493;

Registro27493 crear_registro27493(int id) {
    Registro27493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27493(Registro27493 r) {
    return r.valor + r.id;
}
