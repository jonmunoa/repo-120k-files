// fichero 20821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20821;

Registro20821 crear_registro20821(int id) {
    Registro20821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20821(Registro20821 r) {
    return r.valor + r.id;
}
