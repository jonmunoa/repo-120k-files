// fichero 42561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42561;

Registro42561 crear_registro42561(int id) {
    Registro42561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42561(Registro42561 r) {
    return r.valor + r.id;
}
