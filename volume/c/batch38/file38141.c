// fichero 38141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38141;

Registro38141 crear_registro38141(int id) {
    Registro38141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38141(Registro38141 r) {
    return r.valor + r.id;
}
