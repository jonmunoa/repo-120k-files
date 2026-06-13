// fichero 5465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5465;

Registro5465 crear_registro5465(int id) {
    Registro5465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5465(Registro5465 r) {
    return r.valor + r.id;
}
