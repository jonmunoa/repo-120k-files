// fichero 3909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3909;

Registro3909 crear_registro3909(int id) {
    Registro3909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3909(Registro3909 r) {
    return r.valor + r.id;
}
