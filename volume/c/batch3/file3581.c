// fichero 3581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3581;

Registro3581 crear_registro3581(int id) {
    Registro3581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3581(Registro3581 r) {
    return r.valor + r.id;
}
