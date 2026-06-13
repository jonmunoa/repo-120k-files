// fichero 8473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8473;

Registro8473 crear_registro8473(int id) {
    Registro8473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8473(Registro8473 r) {
    return r.valor + r.id;
}
