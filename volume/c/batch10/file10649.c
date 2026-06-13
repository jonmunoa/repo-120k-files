// fichero 10649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10649;

Registro10649 crear_registro10649(int id) {
    Registro10649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10649(Registro10649 r) {
    return r.valor + r.id;
}
