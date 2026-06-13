// fichero 37713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37713;

Registro37713 crear_registro37713(int id) {
    Registro37713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37713(Registro37713 r) {
    return r.valor + r.id;
}
