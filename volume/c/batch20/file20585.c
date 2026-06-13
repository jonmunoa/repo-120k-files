// fichero 20585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20585;

Registro20585 crear_registro20585(int id) {
    Registro20585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20585(Registro20585 r) {
    return r.valor + r.id;
}
