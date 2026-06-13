// fichero 37081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37081;

Registro37081 crear_registro37081(int id) {
    Registro37081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37081(Registro37081 r) {
    return r.valor + r.id;
}
