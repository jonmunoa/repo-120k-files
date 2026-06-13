// fichero 37561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37561;

Registro37561 crear_registro37561(int id) {
    Registro37561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37561(Registro37561 r) {
    return r.valor + r.id;
}
