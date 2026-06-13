// fichero 48077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48077;

Registro48077 crear_registro48077(int id) {
    Registro48077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48077(Registro48077 r) {
    return r.valor + r.id;
}
