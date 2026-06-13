// fichero 34385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34385;

Registro34385 crear_registro34385(int id) {
    Registro34385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34385(Registro34385 r) {
    return r.valor + r.id;
}
