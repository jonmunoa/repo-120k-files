// fichero 32837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32837;

Registro32837 crear_registro32837(int id) {
    Registro32837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32837(Registro32837 r) {
    return r.valor + r.id;
}
