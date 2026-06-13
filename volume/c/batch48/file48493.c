// fichero 48493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48493;

Registro48493 crear_registro48493(int id) {
    Registro48493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48493(Registro48493 r) {
    return r.valor + r.id;
}
