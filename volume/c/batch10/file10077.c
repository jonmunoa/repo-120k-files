// fichero 10077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10077;

Registro10077 crear_registro10077(int id) {
    Registro10077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10077(Registro10077 r) {
    return r.valor + r.id;
}
