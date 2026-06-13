// fichero 14241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14241;

Registro14241 crear_registro14241(int id) {
    Registro14241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14241(Registro14241 r) {
    return r.valor + r.id;
}
