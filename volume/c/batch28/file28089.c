// fichero 28089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28089;

Registro28089 crear_registro28089(int id) {
    Registro28089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28089(Registro28089 r) {
    return r.valor + r.id;
}
