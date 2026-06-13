// fichero 32221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32221;

Registro32221 crear_registro32221(int id) {
    Registro32221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32221(Registro32221 r) {
    return r.valor + r.id;
}
