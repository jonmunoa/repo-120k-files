// fichero 32949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32949;

Registro32949 crear_registro32949(int id) {
    Registro32949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32949(Registro32949 r) {
    return r.valor + r.id;
}
