// fichero 10553 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10553;

Registro10553 crear_registro10553(int id) {
    Registro10553 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10553(Registro10553 r) {
    return r.valor + r.id;
}
