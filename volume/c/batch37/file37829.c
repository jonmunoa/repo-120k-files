// fichero 37829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37829;

Registro37829 crear_registro37829(int id) {
    Registro37829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37829(Registro37829 r) {
    return r.valor + r.id;
}
