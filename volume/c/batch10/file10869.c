// fichero 10869 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10869;

Registro10869 crear_registro10869(int id) {
    Registro10869 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10869(Registro10869 r) {
    return r.valor + r.id;
}
