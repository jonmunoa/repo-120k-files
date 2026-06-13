// fichero 38949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38949;

Registro38949 crear_registro38949(int id) {
    Registro38949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38949(Registro38949 r) {
    return r.valor + r.id;
}
