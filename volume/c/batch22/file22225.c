// fichero 22225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22225;

Registro22225 crear_registro22225(int id) {
    Registro22225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22225(Registro22225 r) {
    return r.valor + r.id;
}
