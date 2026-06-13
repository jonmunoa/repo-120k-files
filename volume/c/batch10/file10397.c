// fichero 10397 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10397;

Registro10397 crear_registro10397(int id) {
    Registro10397 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10397(Registro10397 r) {
    return r.valor + r.id;
}
