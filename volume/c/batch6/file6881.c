// fichero 6881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6881;

Registro6881 crear_registro6881(int id) {
    Registro6881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6881(Registro6881 r) {
    return r.valor + r.id;
}
