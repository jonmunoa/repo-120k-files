// fichero 36973 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36973;

Registro36973 crear_registro36973(int id) {
    Registro36973 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36973(Registro36973 r) {
    return r.valor + r.id;
}
