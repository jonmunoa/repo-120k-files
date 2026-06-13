// fichero 10377 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10377;

Registro10377 crear_registro10377(int id) {
    Registro10377 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10377(Registro10377 r) {
    return r.valor + r.id;
}
