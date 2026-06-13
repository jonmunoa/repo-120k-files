// fichero 10357 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10357;

Registro10357 crear_registro10357(int id) {
    Registro10357 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10357(Registro10357 r) {
    return r.valor + r.id;
}
