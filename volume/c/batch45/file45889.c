// fichero 45889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45889;

Registro45889 crear_registro45889(int id) {
    Registro45889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45889(Registro45889 r) {
    return r.valor + r.id;
}
