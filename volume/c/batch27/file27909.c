// fichero 27909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27909;

Registro27909 crear_registro27909(int id) {
    Registro27909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27909(Registro27909 r) {
    return r.valor + r.id;
}
