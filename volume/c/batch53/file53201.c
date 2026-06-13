// fichero 53201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53201;

Registro53201 crear_registro53201(int id) {
    Registro53201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53201(Registro53201 r) {
    return r.valor + r.id;
}
