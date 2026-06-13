// fichero 10329 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10329;

Registro10329 crear_registro10329(int id) {
    Registro10329 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10329(Registro10329 r) {
    return r.valor + r.id;
}
