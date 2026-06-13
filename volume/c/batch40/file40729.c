// fichero 40729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40729;

Registro40729 crear_registro40729(int id) {
    Registro40729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40729(Registro40729 r) {
    return r.valor + r.id;
}
