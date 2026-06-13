// fichero 37445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37445;

Registro37445 crear_registro37445(int id) {
    Registro37445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37445(Registro37445 r) {
    return r.valor + r.id;
}
