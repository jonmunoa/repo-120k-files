// fichero 8037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8037;

Registro8037 crear_registro8037(int id) {
    Registro8037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8037(Registro8037 r) {
    return r.valor + r.id;
}
