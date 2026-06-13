// fichero 14557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14557;

Registro14557 crear_registro14557(int id) {
    Registro14557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14557(Registro14557 r) {
    return r.valor + r.id;
}
