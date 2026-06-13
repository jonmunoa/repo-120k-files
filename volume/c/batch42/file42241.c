// fichero 42241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42241;

Registro42241 crear_registro42241(int id) {
    Registro42241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42241(Registro42241 r) {
    return r.valor + r.id;
}
