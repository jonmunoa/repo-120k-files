// fichero 49029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49029;

Registro49029 crear_registro49029(int id) {
    Registro49029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49029(Registro49029 r) {
    return r.valor + r.id;
}
