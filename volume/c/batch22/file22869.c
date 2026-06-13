// fichero 22869 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22869;

Registro22869 crear_registro22869(int id) {
    Registro22869 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22869(Registro22869 r) {
    return r.valor + r.id;
}
