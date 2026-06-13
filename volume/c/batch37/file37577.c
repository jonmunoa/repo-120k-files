// fichero 37577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37577;

Registro37577 crear_registro37577(int id) {
    Registro37577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37577(Registro37577 r) {
    return r.valor + r.id;
}
