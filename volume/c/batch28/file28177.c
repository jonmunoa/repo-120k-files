// fichero 28177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28177;

Registro28177 crear_registro28177(int id) {
    Registro28177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28177(Registro28177 r) {
    return r.valor + r.id;
}
