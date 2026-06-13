// fichero 42113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42113;

Registro42113 crear_registro42113(int id) {
    Registro42113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42113(Registro42113 r) {
    return r.valor + r.id;
}
