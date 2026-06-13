// fichero 47417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47417;

Registro47417 crear_registro47417(int id) {
    Registro47417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47417(Registro47417 r) {
    return r.valor + r.id;
}
