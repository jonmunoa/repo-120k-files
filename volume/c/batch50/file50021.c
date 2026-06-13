// fichero 50021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50021;

Registro50021 crear_registro50021(int id) {
    Registro50021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50021(Registro50021 r) {
    return r.valor + r.id;
}
