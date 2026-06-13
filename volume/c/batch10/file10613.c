// fichero 10613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10613;

Registro10613 crear_registro10613(int id) {
    Registro10613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10613(Registro10613 r) {
    return r.valor + r.id;
}
