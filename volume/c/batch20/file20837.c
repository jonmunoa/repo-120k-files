// fichero 20837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20837;

Registro20837 crear_registro20837(int id) {
    Registro20837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20837(Registro20837 r) {
    return r.valor + r.id;
}
