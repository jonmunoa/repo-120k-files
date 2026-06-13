// fichero 5109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5109;

Registro5109 crear_registro5109(int id) {
    Registro5109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5109(Registro5109 r) {
    return r.valor + r.id;
}
