// fichero 22789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22789;

Registro22789 crear_registro22789(int id) {
    Registro22789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22789(Registro22789 r) {
    return r.valor + r.id;
}
