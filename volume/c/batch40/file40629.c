// fichero 40629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40629;

Registro40629 crear_registro40629(int id) {
    Registro40629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40629(Registro40629 r) {
    return r.valor + r.id;
}
