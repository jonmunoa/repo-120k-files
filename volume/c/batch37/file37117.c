// fichero 37117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37117;

Registro37117 crear_registro37117(int id) {
    Registro37117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37117(Registro37117 r) {
    return r.valor + r.id;
}
