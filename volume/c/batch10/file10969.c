// fichero 10969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10969;

Registro10969 crear_registro10969(int id) {
    Registro10969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10969(Registro10969 r) {
    return r.valor + r.id;
}
