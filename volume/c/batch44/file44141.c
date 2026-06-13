// fichero 44141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44141;

Registro44141 crear_registro44141(int id) {
    Registro44141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44141(Registro44141 r) {
    return r.valor + r.id;
}
