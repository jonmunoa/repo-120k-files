// fichero 44581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44581;

Registro44581 crear_registro44581(int id) {
    Registro44581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44581(Registro44581 r) {
    return r.valor + r.id;
}
