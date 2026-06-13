// fichero 3453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3453;

Registro3453 crear_registro3453(int id) {
    Registro3453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3453(Registro3453 r) {
    return r.valor + r.id;
}
