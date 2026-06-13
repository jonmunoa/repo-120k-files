// fichero 39909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39909;

Registro39909 crear_registro39909(int id) {
    Registro39909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39909(Registro39909 r) {
    return r.valor + r.id;
}
