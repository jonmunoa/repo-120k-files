// fichero 37689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37689;

Registro37689 crear_registro37689(int id) {
    Registro37689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37689(Registro37689 r) {
    return r.valor + r.id;
}
