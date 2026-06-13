// fichero 10089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10089;

Registro10089 crear_registro10089(int id) {
    Registro10089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10089(Registro10089 r) {
    return r.valor + r.id;
}
