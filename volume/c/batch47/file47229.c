// fichero 47229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47229;

Registro47229 crear_registro47229(int id) {
    Registro47229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47229(Registro47229 r) {
    return r.valor + r.id;
}
