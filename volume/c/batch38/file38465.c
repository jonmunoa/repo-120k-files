// fichero 38465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38465;

Registro38465 crear_registro38465(int id) {
    Registro38465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38465(Registro38465 r) {
    return r.valor + r.id;
}
