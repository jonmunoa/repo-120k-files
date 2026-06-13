// fichero 28229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28229;

Registro28229 crear_registro28229(int id) {
    Registro28229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28229(Registro28229 r) {
    return r.valor + r.id;
}
