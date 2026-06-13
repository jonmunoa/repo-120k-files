// fichero 21581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21581;

Registro21581 crear_registro21581(int id) {
    Registro21581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21581(Registro21581 r) {
    return r.valor + r.id;
}
