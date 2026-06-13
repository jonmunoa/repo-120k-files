// fichero 41321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41321;

Registro41321 crear_registro41321(int id) {
    Registro41321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41321(Registro41321 r) {
    return r.valor + r.id;
}
