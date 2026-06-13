// fichero 34813 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34813;

Registro34813 crear_registro34813(int id) {
    Registro34813 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34813(Registro34813 r) {
    return r.valor + r.id;
}
