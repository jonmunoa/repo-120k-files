// fichero 6365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6365;

Registro6365 crear_registro6365(int id) {
    Registro6365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6365(Registro6365 r) {
    return r.valor + r.id;
}
