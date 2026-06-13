// fichero 53541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53541;

Registro53541 crear_registro53541(int id) {
    Registro53541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53541(Registro53541 r) {
    return r.valor + r.id;
}
