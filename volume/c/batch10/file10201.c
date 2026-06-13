// fichero 10201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10201;

Registro10201 crear_registro10201(int id) {
    Registro10201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10201(Registro10201 r) {
    return r.valor + r.id;
}
