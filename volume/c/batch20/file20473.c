// fichero 20473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20473;

Registro20473 crear_registro20473(int id) {
    Registro20473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20473(Registro20473 r) {
    return r.valor + r.id;
}
