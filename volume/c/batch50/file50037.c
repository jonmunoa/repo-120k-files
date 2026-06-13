// fichero 50037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50037;

Registro50037 crear_registro50037(int id) {
    Registro50037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50037(Registro50037 r) {
    return r.valor + r.id;
}
