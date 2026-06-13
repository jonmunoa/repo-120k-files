// fichero 16417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16417;

Registro16417 crear_registro16417(int id) {
    Registro16417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16417(Registro16417 r) {
    return r.valor + r.id;
}
