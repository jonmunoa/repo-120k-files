// fichero 36385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36385;

Registro36385 crear_registro36385(int id) {
    Registro36385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36385(Registro36385 r) {
    return r.valor + r.id;
}
