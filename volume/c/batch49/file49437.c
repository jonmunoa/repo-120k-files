// fichero 49437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49437;

Registro49437 crear_registro49437(int id) {
    Registro49437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49437(Registro49437 r) {
    return r.valor + r.id;
}
