// fichero 44573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44573;

Registro44573 crear_registro44573(int id) {
    Registro44573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44573(Registro44573 r) {
    return r.valor + r.id;
}
