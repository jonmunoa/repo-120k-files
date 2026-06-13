// fichero 9321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9321;

Registro9321 crear_registro9321(int id) {
    Registro9321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9321(Registro9321 r) {
    return r.valor + r.id;
}
