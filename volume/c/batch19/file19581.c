// fichero 19581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19581;

Registro19581 crear_registro19581(int id) {
    Registro19581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19581(Registro19581 r) {
    return r.valor + r.id;
}
