// fichero 6541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6541;

Registro6541 crear_registro6541(int id) {
    Registro6541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6541(Registro6541 r) {
    return r.valor + r.id;
}
