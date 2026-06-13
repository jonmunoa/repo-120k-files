// fichero 4261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4261;

Registro4261 crear_registro4261(int id) {
    Registro4261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4261(Registro4261 r) {
    return r.valor + r.id;
}
