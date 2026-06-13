// fichero 37529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37529;

Registro37529 crear_registro37529(int id) {
    Registro37529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37529(Registro37529 r) {
    return r.valor + r.id;
}
