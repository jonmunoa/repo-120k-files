// fichero 10449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10449;

Registro10449 crear_registro10449(int id) {
    Registro10449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10449(Registro10449 r) {
    return r.valor + r.id;
}
