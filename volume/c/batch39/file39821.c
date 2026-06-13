// fichero 39821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39821;

Registro39821 crear_registro39821(int id) {
    Registro39821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39821(Registro39821 r) {
    return r.valor + r.id;
}
