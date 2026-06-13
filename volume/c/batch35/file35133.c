// fichero 35133 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35133;

Registro35133 crear_registro35133(int id) {
    Registro35133 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35133(Registro35133 r) {
    return r.valor + r.id;
}
