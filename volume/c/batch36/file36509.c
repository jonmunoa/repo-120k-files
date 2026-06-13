// fichero 36509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36509;

Registro36509 crear_registro36509(int id) {
    Registro36509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36509(Registro36509 r) {
    return r.valor + r.id;
}
