// fichero 44461 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44461;

Registro44461 crear_registro44461(int id) {
    Registro44461 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44461(Registro44461 r) {
    return r.valor + r.id;
}
