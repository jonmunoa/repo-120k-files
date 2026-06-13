// fichero 44385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44385;

Registro44385 crear_registro44385(int id) {
    Registro44385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44385(Registro44385 r) {
    return r.valor + r.id;
}
