// fichero 38213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38213;

Registro38213 crear_registro38213(int id) {
    Registro38213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38213(Registro38213 r) {
    return r.valor + r.id;
}
