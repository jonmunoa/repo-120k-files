// fichero 10145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10145;

Registro10145 crear_registro10145(int id) {
    Registro10145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10145(Registro10145 r) {
    return r.valor + r.id;
}
