// fichero 24453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24453;

Registro24453 crear_registro24453(int id) {
    Registro24453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24453(Registro24453 r) {
    return r.valor + r.id;
}
