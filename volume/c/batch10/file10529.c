// fichero 10529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10529;

Registro10529 crear_registro10529(int id) {
    Registro10529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10529(Registro10529 r) {
    return r.valor + r.id;
}
