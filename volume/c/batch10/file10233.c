// fichero 10233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10233;

Registro10233 crear_registro10233(int id) {
    Registro10233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10233(Registro10233 r) {
    return r.valor + r.id;
}
