// fichero 3481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3481;

Registro3481 crear_registro3481(int id) {
    Registro3481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3481(Registro3481 r) {
    return r.valor + r.id;
}
