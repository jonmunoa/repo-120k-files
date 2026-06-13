// fichero 8889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8889;

Registro8889 crear_registro8889(int id) {
    Registro8889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8889(Registro8889 r) {
    return r.valor + r.id;
}
