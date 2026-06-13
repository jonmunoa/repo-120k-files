// fichero 10185 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10185;

Registro10185 crear_registro10185(int id) {
    Registro10185 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10185(Registro10185 r) {
    return r.valor + r.id;
}
