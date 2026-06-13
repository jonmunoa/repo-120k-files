// fichero 10537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10537;

Registro10537 crear_registro10537(int id) {
    Registro10537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10537(Registro10537 r) {
    return r.valor + r.id;
}
