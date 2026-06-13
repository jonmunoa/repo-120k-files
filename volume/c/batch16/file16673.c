// fichero 16673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16673;

Registro16673 crear_registro16673(int id) {
    Registro16673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16673(Registro16673 r) {
    return r.valor + r.id;
}
