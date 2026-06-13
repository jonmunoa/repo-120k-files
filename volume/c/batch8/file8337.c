// fichero 8337 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8337;

Registro8337 crear_registro8337(int id) {
    Registro8337 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8337(Registro8337 r) {
    return r.valor + r.id;
}
