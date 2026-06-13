// fichero 49321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49321;

Registro49321 crear_registro49321(int id) {
    Registro49321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49321(Registro49321 r) {
    return r.valor + r.id;
}
