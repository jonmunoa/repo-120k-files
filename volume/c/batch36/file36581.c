// fichero 36581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36581;

Registro36581 crear_registro36581(int id) {
    Registro36581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36581(Registro36581 r) {
    return r.valor + r.id;
}
