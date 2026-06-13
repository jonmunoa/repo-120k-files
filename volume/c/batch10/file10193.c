// fichero 10193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10193;

Registro10193 crear_registro10193(int id) {
    Registro10193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10193(Registro10193 r) {
    return r.valor + r.id;
}
