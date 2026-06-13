// fichero 38417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38417;

Registro38417 crear_registro38417(int id) {
    Registro38417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38417(Registro38417 r) {
    return r.valor + r.id;
}
