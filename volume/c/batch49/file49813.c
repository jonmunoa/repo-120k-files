// fichero 49813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49813;

Registro49813 crear_registro49813(int id) {
    Registro49813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49813(Registro49813 r) {
    return r.valor + r.id;
}
