// fichero 24517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24517;

Registro24517 crear_registro24517(int id) {
    Registro24517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24517(Registro24517 r) {
    return r.valor + r.id;
}
