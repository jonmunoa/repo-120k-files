// fichero 10133 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10133;

Registro10133 crear_registro10133(int id) {
    Registro10133 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10133(Registro10133 r) {
    return r.valor + r.id;
}
