// fichero 10101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10101;

Registro10101 crear_registro10101(int id) {
    Registro10101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10101(Registro10101 r) {
    return r.valor + r.id;
}
