// fichero 5501 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5501;

Registro5501 crear_registro5501(int id) {
    Registro5501 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5501(Registro5501 r) {
    return r.valor + r.id;
}
