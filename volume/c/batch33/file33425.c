// fichero 33425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33425;

Registro33425 crear_registro33425(int id) {
    Registro33425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33425(Registro33425 r) {
    return r.valor + r.id;
}
