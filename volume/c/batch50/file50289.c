// fichero 50289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50289;

Registro50289 crear_registro50289(int id) {
    Registro50289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50289(Registro50289 r) {
    return r.valor + r.id;
}
