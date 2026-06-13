// fichero 40341 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40341;

Registro40341 crear_registro40341(int id) {
    Registro40341 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40341(Registro40341 r) {
    return r.valor + r.id;
}
