// fichero 24225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24225;

Registro24225 crear_registro24225(int id) {
    Registro24225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24225(Registro24225 r) {
    return r.valor + r.id;
}
