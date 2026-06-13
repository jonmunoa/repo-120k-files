// fichero 44909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44909;

Registro44909 crear_registro44909(int id) {
    Registro44909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44909(Registro44909 r) {
    return r.valor + r.id;
}
