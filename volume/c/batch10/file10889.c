// fichero 10889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10889;

Registro10889 crear_registro10889(int id) {
    Registro10889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10889(Registro10889 r) {
    return r.valor + r.id;
}
