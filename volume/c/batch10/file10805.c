// fichero 10805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10805;

Registro10805 crear_registro10805(int id) {
    Registro10805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10805(Registro10805 r) {
    return r.valor + r.id;
}
