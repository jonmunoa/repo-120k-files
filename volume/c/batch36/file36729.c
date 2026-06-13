// fichero 36729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36729;

Registro36729 crear_registro36729(int id) {
    Registro36729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36729(Registro36729 r) {
    return r.valor + r.id;
}
