// fichero 36173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36173;

Registro36173 crear_registro36173(int id) {
    Registro36173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36173(Registro36173 r) {
    return r.valor + r.id;
}
