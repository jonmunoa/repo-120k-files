// fichero 36325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36325;

Registro36325 crear_registro36325(int id) {
    Registro36325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36325(Registro36325 r) {
    return r.valor + r.id;
}
