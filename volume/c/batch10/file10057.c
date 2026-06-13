// fichero 10057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10057;

Registro10057 crear_registro10057(int id) {
    Registro10057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10057(Registro10057 r) {
    return r.valor + r.id;
}
