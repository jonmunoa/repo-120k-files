// fichero 36321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36321;

Registro36321 crear_registro36321(int id) {
    Registro36321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36321(Registro36321 r) {
    return r.valor + r.id;
}
