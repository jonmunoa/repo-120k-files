// fichero 10305 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10305;

Registro10305 crear_registro10305(int id) {
    Registro10305 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10305(Registro10305 r) {
    return r.valor + r.id;
}
