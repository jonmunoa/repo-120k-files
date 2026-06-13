// fichero 6417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6417;

Registro6417 crear_registro6417(int id) {
    Registro6417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6417(Registro6417 r) {
    return r.valor + r.id;
}
