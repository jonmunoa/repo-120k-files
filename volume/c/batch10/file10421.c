// fichero 10421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10421;

Registro10421 crear_registro10421(int id) {
    Registro10421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10421(Registro10421 r) {
    return r.valor + r.id;
}
