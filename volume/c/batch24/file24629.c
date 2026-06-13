// fichero 24629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24629;

Registro24629 crear_registro24629(int id) {
    Registro24629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24629(Registro24629 r) {
    return r.valor + r.id;
}
