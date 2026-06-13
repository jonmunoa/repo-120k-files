// fichero 3125 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3125;

Registro3125 crear_registro3125(int id) {
    Registro3125 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3125(Registro3125 r) {
    return r.valor + r.id;
}
