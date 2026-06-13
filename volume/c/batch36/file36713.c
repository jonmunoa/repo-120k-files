// fichero 36713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36713;

Registro36713 crear_registro36713(int id) {
    Registro36713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36713(Registro36713 r) {
    return r.valor + r.id;
}
