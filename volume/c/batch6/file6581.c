// fichero 6581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6581;

Registro6581 crear_registro6581(int id) {
    Registro6581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6581(Registro6581 r) {
    return r.valor + r.id;
}
