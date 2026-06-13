// fichero 14709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14709;

Registro14709 crear_registro14709(int id) {
    Registro14709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14709(Registro14709 r) {
    return r.valor + r.id;
}
