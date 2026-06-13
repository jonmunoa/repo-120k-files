// fichero 26101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26101;

Registro26101 crear_registro26101(int id) {
    Registro26101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26101(Registro26101 r) {
    return r.valor + r.id;
}
