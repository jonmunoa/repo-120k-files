// fichero 38101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38101;

Registro38101 crear_registro38101(int id) {
    Registro38101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38101(Registro38101 r) {
    return r.valor + r.id;
}
