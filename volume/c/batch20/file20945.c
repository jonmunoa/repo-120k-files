// fichero 20945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20945;

Registro20945 crear_registro20945(int id) {
    Registro20945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20945(Registro20945 r) {
    return r.valor + r.id;
}
