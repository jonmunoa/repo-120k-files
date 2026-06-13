// fichero 7237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7237;

Registro7237 crear_registro7237(int id) {
    Registro7237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7237(Registro7237 r) {
    return r.valor + r.id;
}
