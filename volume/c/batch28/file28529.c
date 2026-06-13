// fichero 28529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28529;

Registro28529 crear_registro28529(int id) {
    Registro28529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28529(Registro28529 r) {
    return r.valor + r.id;
}
