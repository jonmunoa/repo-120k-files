// fichero 18321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18321;

Registro18321 crear_registro18321(int id) {
    Registro18321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18321(Registro18321 r) {
    return r.valor + r.id;
}
