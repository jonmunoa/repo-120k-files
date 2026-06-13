// fichero 40141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40141;

Registro40141 crear_registro40141(int id) {
    Registro40141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40141(Registro40141 r) {
    return r.valor + r.id;
}
