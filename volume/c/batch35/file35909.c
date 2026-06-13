// fichero 35909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35909;

Registro35909 crear_registro35909(int id) {
    Registro35909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35909(Registro35909 r) {
    return r.valor + r.id;
}
