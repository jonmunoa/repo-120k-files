// fichero 40921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40921;

Registro40921 crear_registro40921(int id) {
    Registro40921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40921(Registro40921 r) {
    return r.valor + r.id;
}
