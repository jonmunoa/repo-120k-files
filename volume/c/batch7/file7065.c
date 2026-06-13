// fichero 7065 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7065;

Registro7065 crear_registro7065(int id) {
    Registro7065 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7065(Registro7065 r) {
    return r.valor + r.id;
}
