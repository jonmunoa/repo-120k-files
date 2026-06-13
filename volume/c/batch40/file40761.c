// fichero 40761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40761;

Registro40761 crear_registro40761(int id) {
    Registro40761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40761(Registro40761 r) {
    return r.valor + r.id;
}
