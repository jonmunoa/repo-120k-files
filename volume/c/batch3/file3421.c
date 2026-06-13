// fichero 3421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3421;

Registro3421 crear_registro3421(int id) {
    Registro3421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3421(Registro3421 r) {
    return r.valor + r.id;
}
