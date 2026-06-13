// fichero 14029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14029;

Registro14029 crear_registro14029(int id) {
    Registro14029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14029(Registro14029 r) {
    return r.valor + r.id;
}
