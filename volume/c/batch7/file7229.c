// fichero 7229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7229;

Registro7229 crear_registro7229(int id) {
    Registro7229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7229(Registro7229 r) {
    return r.valor + r.id;
}
