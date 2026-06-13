// fichero 47581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47581;

Registro47581 crear_registro47581(int id) {
    Registro47581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47581(Registro47581 r) {
    return r.valor + r.id;
}
