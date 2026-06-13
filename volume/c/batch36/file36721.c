// fichero 36721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36721;

Registro36721 crear_registro36721(int id) {
    Registro36721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36721(Registro36721 r) {
    return r.valor + r.id;
}
