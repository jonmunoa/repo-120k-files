// fichero 22629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22629;

Registro22629 crear_registro22629(int id) {
    Registro22629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22629(Registro22629 r) {
    return r.valor + r.id;
}
