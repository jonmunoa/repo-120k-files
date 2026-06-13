// fichero 7601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7601;

Registro7601 crear_registro7601(int id) {
    Registro7601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7601(Registro7601 r) {
    return r.valor + r.id;
}
