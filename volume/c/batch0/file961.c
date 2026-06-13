// fichero 961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro961;

Registro961 crear_registro961(int id) {
    Registro961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro961(Registro961 r) {
    return r.valor + r.id;
}
