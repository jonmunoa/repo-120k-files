// fichero 10621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10621;

Registro10621 crear_registro10621(int id) {
    Registro10621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10621(Registro10621 r) {
    return r.valor + r.id;
}
