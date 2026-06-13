// fichero 50173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50173;

Registro50173 crear_registro50173(int id) {
    Registro50173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50173(Registro50173 r) {
    return r.valor + r.id;
}
