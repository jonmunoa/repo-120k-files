// fichero 5689 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5689;

Registro5689 crear_registro5689(int id) {
    Registro5689 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5689(Registro5689 r) {
    return r.valor + r.id;
}
