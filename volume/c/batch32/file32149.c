// fichero 32149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32149;

Registro32149 crear_registro32149(int id) {
    Registro32149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32149(Registro32149 r) {
    return r.valor + r.id;
}
