// fichero 36801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36801;

Registro36801 crear_registro36801(int id) {
    Registro36801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36801(Registro36801 r) {
    return r.valor + r.id;
}
