// fichero 3709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3709;

Registro3709 crear_registro3709(int id) {
    Registro3709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3709(Registro3709 r) {
    return r.valor + r.id;
}
