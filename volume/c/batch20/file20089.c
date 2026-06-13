// fichero 20089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20089;

Registro20089 crear_registro20089(int id) {
    Registro20089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20089(Registro20089 r) {
    return r.valor + r.id;
}
