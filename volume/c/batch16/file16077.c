// fichero 16077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16077;

Registro16077 crear_registro16077(int id) {
    Registro16077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16077(Registro16077 r) {
    return r.valor + r.id;
}
