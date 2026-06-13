// fichero 33909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33909;

Registro33909 crear_registro33909(int id) {
    Registro33909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33909(Registro33909 r) {
    return r.valor + r.id;
}
