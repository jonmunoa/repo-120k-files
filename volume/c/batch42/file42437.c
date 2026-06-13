// fichero 42437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42437;

Registro42437 crear_registro42437(int id) {
    Registro42437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42437(Registro42437 r) {
    return r.valor + r.id;
}
