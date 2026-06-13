// fichero 8997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8997;

Registro8997 crear_registro8997(int id) {
    Registro8997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8997(Registro8997 r) {
    return r.valor + r.id;
}
