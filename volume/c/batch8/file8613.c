// fichero 8613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8613;

Registro8613 crear_registro8613(int id) {
    Registro8613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8613(Registro8613 r) {
    return r.valor + r.id;
}
