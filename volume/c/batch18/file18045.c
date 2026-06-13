// fichero 18045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18045;

Registro18045 crear_registro18045(int id) {
    Registro18045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18045(Registro18045 r) {
    return r.valor + r.id;
}
