// fichero 10581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10581;

Registro10581 crear_registro10581(int id) {
    Registro10581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10581(Registro10581 r) {
    return r.valor + r.id;
}
