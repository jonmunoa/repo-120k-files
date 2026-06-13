// fichero 36597 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36597;

Registro36597 crear_registro36597(int id) {
    Registro36597 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36597(Registro36597 r) {
    return r.valor + r.id;
}
