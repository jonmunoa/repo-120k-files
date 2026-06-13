// fichero 10517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10517;

Registro10517 crear_registro10517(int id) {
    Registro10517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10517(Registro10517 r) {
    return r.valor + r.id;
}
