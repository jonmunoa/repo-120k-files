// fichero 10113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10113;

Registro10113 crear_registro10113(int id) {
    Registro10113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10113(Registro10113 r) {
    return r.valor + r.id;
}
