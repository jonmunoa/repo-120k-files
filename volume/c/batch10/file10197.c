// fichero 10197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10197;

Registro10197 crear_registro10197(int id) {
    Registro10197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10197(Registro10197 r) {
    return r.valor + r.id;
}
