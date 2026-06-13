// fichero 19989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19989;

Registro19989 crear_registro19989(int id) {
    Registro19989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19989(Registro19989 r) {
    return r.valor + r.id;
}
