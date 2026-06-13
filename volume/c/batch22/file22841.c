// fichero 22841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22841;

Registro22841 crear_registro22841(int id) {
    Registro22841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22841(Registro22841 r) {
    return r.valor + r.id;
}
