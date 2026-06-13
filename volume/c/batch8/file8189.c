// fichero 8189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8189;

Registro8189 crear_registro8189(int id) {
    Registro8189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8189(Registro8189 r) {
    return r.valor + r.id;
}
