// fichero 50325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50325;

Registro50325 crear_registro50325(int id) {
    Registro50325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50325(Registro50325 r) {
    return r.valor + r.id;
}
