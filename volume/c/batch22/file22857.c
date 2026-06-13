// fichero 22857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22857;

Registro22857 crear_registro22857(int id) {
    Registro22857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22857(Registro22857 r) {
    return r.valor + r.id;
}
