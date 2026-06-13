// fichero 30453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30453;

Registro30453 crear_registro30453(int id) {
    Registro30453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30453(Registro30453 r) {
    return r.valor + r.id;
}
