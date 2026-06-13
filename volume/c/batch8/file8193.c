// fichero 8193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8193;

Registro8193 crear_registro8193(int id) {
    Registro8193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8193(Registro8193 r) {
    return r.valor + r.id;
}
