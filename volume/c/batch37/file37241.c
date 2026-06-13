// fichero 37241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37241;

Registro37241 crear_registro37241(int id) {
    Registro37241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37241(Registro37241 r) {
    return r.valor + r.id;
}
