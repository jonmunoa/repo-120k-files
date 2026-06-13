// fichero 22909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22909;

Registro22909 crear_registro22909(int id) {
    Registro22909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22909(Registro22909 r) {
    return r.valor + r.id;
}
