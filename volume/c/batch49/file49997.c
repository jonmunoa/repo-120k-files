// fichero 49997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49997;

Registro49997 crear_registro49997(int id) {
    Registro49997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49997(Registro49997 r) {
    return r.valor + r.id;
}
