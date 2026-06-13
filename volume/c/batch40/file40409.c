// fichero 40409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40409;

Registro40409 crear_registro40409(int id) {
    Registro40409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40409(Registro40409 r) {
    return r.valor + r.id;
}
