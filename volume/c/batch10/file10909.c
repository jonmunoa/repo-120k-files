// fichero 10909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10909;

Registro10909 crear_registro10909(int id) {
    Registro10909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10909(Registro10909 r) {
    return r.valor + r.id;
}
