// fichero 4565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4565;

Registro4565 crear_registro4565(int id) {
    Registro4565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4565(Registro4565 r) {
    return r.valor + r.id;
}
