// fichero 42685 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42685;

Registro42685 crear_registro42685(int id) {
    Registro42685 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42685(Registro42685 r) {
    return r.valor + r.id;
}
