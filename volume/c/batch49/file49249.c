// fichero 49249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49249;

Registro49249 crear_registro49249(int id) {
    Registro49249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49249(Registro49249 r) {
    return r.valor + r.id;
}
