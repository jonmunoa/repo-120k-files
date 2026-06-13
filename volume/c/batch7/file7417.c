// fichero 7417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7417;

Registro7417 crear_registro7417(int id) {
    Registro7417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7417(Registro7417 r) {
    return r.valor + r.id;
}
