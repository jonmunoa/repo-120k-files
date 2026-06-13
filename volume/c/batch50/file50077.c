// fichero 50077 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50077;

Registro50077 crear_registro50077(int id) {
    Registro50077 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50077(Registro50077 r) {
    return r.valor + r.id;
}
