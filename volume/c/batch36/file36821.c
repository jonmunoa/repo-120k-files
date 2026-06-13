// fichero 36821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36821;

Registro36821 crear_registro36821(int id) {
    Registro36821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36821(Registro36821 r) {
    return r.valor + r.id;
}
