// fichero 3089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3089;

Registro3089 crear_registro3089(int id) {
    Registro3089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3089(Registro3089 r) {
    return r.valor + r.id;
}
