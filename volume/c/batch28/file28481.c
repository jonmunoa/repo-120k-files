// fichero 28481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28481;

Registro28481 crear_registro28481(int id) {
    Registro28481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28481(Registro28481 r) {
    return r.valor + r.id;
}
