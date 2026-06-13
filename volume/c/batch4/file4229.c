// fichero 4229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4229;

Registro4229 crear_registro4229(int id) {
    Registro4229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4229(Registro4229 r) {
    return r.valor + r.id;
}
