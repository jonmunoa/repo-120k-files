// fichero 10213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10213;

Registro10213 crear_registro10213(int id) {
    Registro10213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10213(Registro10213 r) {
    return r.valor + r.id;
}
