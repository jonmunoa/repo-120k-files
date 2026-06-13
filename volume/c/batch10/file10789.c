// fichero 10789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10789;

Registro10789 crear_registro10789(int id) {
    Registro10789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10789(Registro10789 r) {
    return r.valor + r.id;
}
