// fichero 50577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50577;

Registro50577 crear_registro50577(int id) {
    Registro50577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50577(Registro50577 r) {
    return r.valor + r.id;
}
