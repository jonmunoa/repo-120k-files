// fichero 10921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10921;

Registro10921 crear_registro10921(int id) {
    Registro10921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10921(Registro10921 r) {
    return r.valor + r.id;
}
