// fichero 26821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26821;

Registro26821 crear_registro26821(int id) {
    Registro26821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26821(Registro26821 r) {
    return r.valor + r.id;
}
