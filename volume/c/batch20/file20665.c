// fichero 20665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20665;

Registro20665 crear_registro20665(int id) {
    Registro20665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20665(Registro20665 r) {
    return r.valor + r.id;
}
