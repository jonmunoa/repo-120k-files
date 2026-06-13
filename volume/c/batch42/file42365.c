// fichero 42365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42365;

Registro42365 crear_registro42365(int id) {
    Registro42365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42365(Registro42365 r) {
    return r.valor + r.id;
}
