// fichero 24581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24581;

Registro24581 crear_registro24581(int id) {
    Registro24581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24581(Registro24581 r) {
    return r.valor + r.id;
}
