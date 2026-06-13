// fichero 10409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10409;

Registro10409 crear_registro10409(int id) {
    Registro10409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10409(Registro10409 r) {
    return r.valor + r.id;
}
