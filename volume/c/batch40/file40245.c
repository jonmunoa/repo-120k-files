// fichero 40245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40245;

Registro40245 crear_registro40245(int id) {
    Registro40245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40245(Registro40245 r) {
    return r.valor + r.id;
}
