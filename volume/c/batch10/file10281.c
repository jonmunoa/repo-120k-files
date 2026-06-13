// fichero 10281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10281;

Registro10281 crear_registro10281(int id) {
    Registro10281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10281(Registro10281 r) {
    return r.valor + r.id;
}
