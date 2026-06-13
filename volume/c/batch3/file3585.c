// fichero 3585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3585;

Registro3585 crear_registro3585(int id) {
    Registro3585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3585(Registro3585 r) {
    return r.valor + r.id;
}
