// fichero 3189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3189;

Registro3189 crear_registro3189(int id) {
    Registro3189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3189(Registro3189 r) {
    return r.valor + r.id;
}
