// fichero 36405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36405;

Registro36405 crear_registro36405(int id) {
    Registro36405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36405(Registro36405 r) {
    return r.valor + r.id;
}
