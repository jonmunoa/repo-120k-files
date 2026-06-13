// fichero 47821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47821;

Registro47821 crear_registro47821(int id) {
    Registro47821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47821(Registro47821 r) {
    return r.valor + r.id;
}
