// fichero 37909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37909;

Registro37909 crear_registro37909(int id) {
    Registro37909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37909(Registro37909 r) {
    return r.valor + r.id;
}
