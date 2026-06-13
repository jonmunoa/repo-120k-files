// fichero 10253 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10253;

Registro10253 crear_registro10253(int id) {
    Registro10253 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10253(Registro10253 r) {
    return r.valor + r.id;
}
