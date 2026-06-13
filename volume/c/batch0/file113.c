// fichero 113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro113;

Registro113 crear_registro113(int id) {
    Registro113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro113(Registro113 r) {
    return r.valor + r.id;
}
