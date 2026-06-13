// fichero 40573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40573;

Registro40573 crear_registro40573(int id) {
    Registro40573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40573(Registro40573 r) {
    return r.valor + r.id;
}
