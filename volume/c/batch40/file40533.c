// fichero 40533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40533;

Registro40533 crear_registro40533(int id) {
    Registro40533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40533(Registro40533 r) {
    return r.valor + r.id;
}
