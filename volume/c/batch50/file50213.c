// fichero 50213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50213;

Registro50213 crear_registro50213(int id) {
    Registro50213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50213(Registro50213 r) {
    return r.valor + r.id;
}
