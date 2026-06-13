// fichero 12909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12909;

Registro12909 crear_registro12909(int id) {
    Registro12909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12909(Registro12909 r) {
    return r.valor + r.id;
}
