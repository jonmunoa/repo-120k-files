// fichero 36521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36521;

Registro36521 crear_registro36521(int id) {
    Registro36521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36521(Registro36521 r) {
    return r.valor + r.id;
}
