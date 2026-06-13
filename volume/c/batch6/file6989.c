// fichero 6989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6989;

Registro6989 crear_registro6989(int id) {
    Registro6989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6989(Registro6989 r) {
    return r.valor + r.id;
}
