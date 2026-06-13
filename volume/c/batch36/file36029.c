// fichero 36029 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36029;

Registro36029 crear_registro36029(int id) {
    Registro36029 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36029(Registro36029 r) {
    return r.valor + r.id;
}
