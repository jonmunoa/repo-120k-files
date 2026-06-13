// fichero 20053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20053;

Registro20053 crear_registro20053(int id) {
    Registro20053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20053(Registro20053 r) {
    return r.valor + r.id;
}
