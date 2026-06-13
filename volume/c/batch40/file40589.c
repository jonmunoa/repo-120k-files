// fichero 40589 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40589;

Registro40589 crear_registro40589(int id) {
    Registro40589 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40589(Registro40589 r) {
    return r.valor + r.id;
}
