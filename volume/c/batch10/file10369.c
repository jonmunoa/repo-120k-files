// fichero 10369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10369;

Registro10369 crear_registro10369(int id) {
    Registro10369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10369(Registro10369 r) {
    return r.valor + r.id;
}
