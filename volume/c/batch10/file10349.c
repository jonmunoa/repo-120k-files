// fichero 10349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10349;

Registro10349 crear_registro10349(int id) {
    Registro10349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10349(Registro10349 r) {
    return r.valor + r.id;
}
