// fichero 909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro909;

Registro909 crear_registro909(int id) {
    Registro909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro909(Registro909 r) {
    return r.valor + r.id;
}
