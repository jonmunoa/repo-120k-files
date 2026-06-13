// fichero 17433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17433;

Registro17433 crear_registro17433(int id) {
    Registro17433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17433(Registro17433 r) {
    return r.valor + r.id;
}
