// fichero 10653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10653;

Registro10653 crear_registro10653(int id) {
    Registro10653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10653(Registro10653 r) {
    return r.valor + r.id;
}
