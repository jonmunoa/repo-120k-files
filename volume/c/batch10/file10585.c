// fichero 10585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10585;

Registro10585 crear_registro10585(int id) {
    Registro10585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10585(Registro10585 r) {
    return r.valor + r.id;
}
