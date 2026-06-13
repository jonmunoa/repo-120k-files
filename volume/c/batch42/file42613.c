// fichero 42613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42613;

Registro42613 crear_registro42613(int id) {
    Registro42613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42613(Registro42613 r) {
    return r.valor + r.id;
}
