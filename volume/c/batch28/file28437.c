// fichero 28437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28437;

Registro28437 crear_registro28437(int id) {
    Registro28437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28437(Registro28437 r) {
    return r.valor + r.id;
}
