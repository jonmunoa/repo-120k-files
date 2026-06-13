// fichero 28013 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28013;

Registro28013 crear_registro28013(int id) {
    Registro28013 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28013(Registro28013 r) {
    return r.valor + r.id;
}
