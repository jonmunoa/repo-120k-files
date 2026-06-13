// fichero 6757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6757;

Registro6757 crear_registro6757(int id) {
    Registro6757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6757(Registro6757 r) {
    return r.valor + r.id;
}
