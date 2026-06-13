// fichero 26417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26417;

Registro26417 crear_registro26417(int id) {
    Registro26417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26417(Registro26417 r) {
    return r.valor + r.id;
}
