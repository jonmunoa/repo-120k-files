// fichero 36381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36381;

Registro36381 crear_registro36381(int id) {
    Registro36381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36381(Registro36381 r) {
    return r.valor + r.id;
}
