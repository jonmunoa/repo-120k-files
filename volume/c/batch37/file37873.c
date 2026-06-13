// fichero 37873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37873;

Registro37873 crear_registro37873(int id) {
    Registro37873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37873(Registro37873 r) {
    return r.valor + r.id;
}
