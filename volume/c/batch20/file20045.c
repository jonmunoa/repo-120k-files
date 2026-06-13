// fichero 20045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20045;

Registro20045 crear_registro20045(int id) {
    Registro20045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20045(Registro20045 r) {
    return r.valor + r.id;
}
