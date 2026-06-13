// fichero 38605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38605;

Registro38605 crear_registro38605(int id) {
    Registro38605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38605(Registro38605 r) {
    return r.valor + r.id;
}
