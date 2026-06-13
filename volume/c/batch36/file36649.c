// fichero 36649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36649;

Registro36649 crear_registro36649(int id) {
    Registro36649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36649(Registro36649 r) {
    return r.valor + r.id;
}
