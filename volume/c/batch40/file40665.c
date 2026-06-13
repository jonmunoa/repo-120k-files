// fichero 40665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40665;

Registro40665 crear_registro40665(int id) {
    Registro40665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40665(Registro40665 r) {
    return r.valor + r.id;
}
