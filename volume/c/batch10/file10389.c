// fichero 10389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10389;

Registro10389 crear_registro10389(int id) {
    Registro10389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10389(Registro10389 r) {
    return r.valor + r.id;
}
