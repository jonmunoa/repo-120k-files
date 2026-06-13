// fichero 36189 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36189;

Registro36189 crear_registro36189(int id) {
    Registro36189 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36189(Registro36189 r) {
    return r.valor + r.id;
}
