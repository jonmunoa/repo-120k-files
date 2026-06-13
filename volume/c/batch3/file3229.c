// fichero 3229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3229;

Registro3229 crear_registro3229(int id) {
    Registro3229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3229(Registro3229 r) {
    return r.valor + r.id;
}
