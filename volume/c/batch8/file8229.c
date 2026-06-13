// fichero 8229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8229;

Registro8229 crear_registro8229(int id) {
    Registro8229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8229(Registro8229 r) {
    return r.valor + r.id;
}
