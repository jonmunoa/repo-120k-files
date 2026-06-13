// fichero 39793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39793;

Registro39793 crear_registro39793(int id) {
    Registro39793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39793(Registro39793 r) {
    return r.valor + r.id;
}
