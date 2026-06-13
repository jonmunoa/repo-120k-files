// fichero 24937 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24937;

Registro24937 crear_registro24937(int id) {
    Registro24937 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24937(Registro24937 r) {
    return r.valor + r.id;
}
