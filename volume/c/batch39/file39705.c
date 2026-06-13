// fichero 39705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39705;

Registro39705 crear_registro39705(int id) {
    Registro39705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39705(Registro39705 r) {
    return r.valor + r.id;
}
