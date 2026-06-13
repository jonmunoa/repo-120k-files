// fichero 36201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36201;

Registro36201 crear_registro36201(int id) {
    Registro36201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36201(Registro36201 r) {
    return r.valor + r.id;
}
