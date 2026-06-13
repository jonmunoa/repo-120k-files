// fichero 8973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8973;

Registro8973 crear_registro8973(int id) {
    Registro8973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8973(Registro8973 r) {
    return r.valor + r.id;
}
