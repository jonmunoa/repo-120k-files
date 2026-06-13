// fichero 47541 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47541;

Registro47541 crear_registro47541(int id) {
    Registro47541 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47541(Registro47541 r) {
    return r.valor + r.id;
}
