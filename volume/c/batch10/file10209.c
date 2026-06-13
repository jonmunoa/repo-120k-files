// fichero 10209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10209;

Registro10209 crear_registro10209(int id) {
    Registro10209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10209(Registro10209 r) {
    return r.valor + r.id;
}
