// fichero 36641 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36641;

Registro36641 crear_registro36641(int id) {
    Registro36641 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36641(Registro36641 r) {
    return r.valor + r.id;
}
