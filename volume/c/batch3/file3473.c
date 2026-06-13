// fichero 3473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3473;

Registro3473 crear_registro3473(int id) {
    Registro3473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3473(Registro3473 r) {
    return r.valor + r.id;
}
