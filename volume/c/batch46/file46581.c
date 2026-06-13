// fichero 46581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46581;

Registro46581 crear_registro46581(int id) {
    Registro46581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46581(Registro46581 r) {
    return r.valor + r.id;
}
