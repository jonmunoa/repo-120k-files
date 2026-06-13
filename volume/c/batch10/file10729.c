// fichero 10729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10729;

Registro10729 crear_registro10729(int id) {
    Registro10729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10729(Registro10729 r) {
    return r.valor + r.id;
}
