// fichero 3297 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3297;

Registro3297 crear_registro3297(int id) {
    Registro3297 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3297(Registro3297 r) {
    return r.valor + r.id;
}
