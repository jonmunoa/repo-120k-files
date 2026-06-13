// fichero 53193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53193;

Registro53193 crear_registro53193(int id) {
    Registro53193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53193(Registro53193 r) {
    return r.valor + r.id;
}
