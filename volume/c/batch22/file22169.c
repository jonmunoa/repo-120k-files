// fichero 22169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22169;

Registro22169 crear_registro22169(int id) {
    Registro22169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22169(Registro22169 r) {
    return r.valor + r.id;
}
