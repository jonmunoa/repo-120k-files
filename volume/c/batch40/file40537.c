// fichero 40537 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40537;

Registro40537 crear_registro40537(int id) {
    Registro40537 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40537(Registro40537 r) {
    return r.valor + r.id;
}
