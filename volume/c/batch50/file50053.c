// fichero 50053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50053;

Registro50053 crear_registro50053(int id) {
    Registro50053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50053(Registro50053 r) {
    return r.valor + r.id;
}
