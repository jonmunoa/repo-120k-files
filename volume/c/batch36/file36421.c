// fichero 36421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36421;

Registro36421 crear_registro36421(int id) {
    Registro36421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36421(Registro36421 r) {
    return r.valor + r.id;
}
