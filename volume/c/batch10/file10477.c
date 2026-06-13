// fichero 10477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10477;

Registro10477 crear_registro10477(int id) {
    Registro10477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10477(Registro10477 r) {
    return r.valor + r.id;
}
