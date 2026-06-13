// fichero 8909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8909;

Registro8909 crear_registro8909(int id) {
    Registro8909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8909(Registro8909 r) {
    return r.valor + r.id;
}
