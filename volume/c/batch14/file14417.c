// fichero 14417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14417;

Registro14417 crear_registro14417(int id) {
    Registro14417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14417(Registro14417 r) {
    return r.valor + r.id;
}
