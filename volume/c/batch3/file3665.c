// fichero 3665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3665;

Registro3665 crear_registro3665(int id) {
    Registro3665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3665(Registro3665 r) {
    return r.valor + r.id;
}
