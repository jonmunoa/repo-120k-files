// fichero 40113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40113;

Registro40113 crear_registro40113(int id) {
    Registro40113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40113(Registro40113 r) {
    return r.valor + r.id;
}
