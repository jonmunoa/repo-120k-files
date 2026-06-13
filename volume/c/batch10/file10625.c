// fichero 10625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10625;

Registro10625 crear_registro10625(int id) {
    Registro10625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10625(Registro10625 r) {
    return r.valor + r.id;
}
