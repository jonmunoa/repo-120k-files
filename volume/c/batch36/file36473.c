// fichero 36473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36473;

Registro36473 crear_registro36473(int id) {
    Registro36473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36473(Registro36473 r) {
    return r.valor + r.id;
}
