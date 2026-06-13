// fichero 37 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37;

Registro37 crear_registro37(int id) {
    Registro37 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37(Registro37 r) {
    return r.valor + r.id;
}
