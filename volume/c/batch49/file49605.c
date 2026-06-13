// fichero 49605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49605;

Registro49605 crear_registro49605(int id) {
    Registro49605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49605(Registro49605 r) {
    return r.valor + r.id;
}
