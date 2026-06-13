// fichero 18729 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18729;

Registro18729 crear_registro18729(int id) {
    Registro18729 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18729(Registro18729 r) {
    return r.valor + r.id;
}
