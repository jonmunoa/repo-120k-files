// fichero 10393 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10393;

Registro10393 crear_registro10393(int id) {
    Registro10393 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10393(Registro10393 r) {
    return r.valor + r.id;
}
