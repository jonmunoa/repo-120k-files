// fichero 30909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30909;

Registro30909 crear_registro30909(int id) {
    Registro30909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30909(Registro30909 r) {
    return r.valor + r.id;
}
