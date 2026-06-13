// fichero 8017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8017;

Registro8017 crear_registro8017(int id) {
    Registro8017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8017(Registro8017 r) {
    return r.valor + r.id;
}
