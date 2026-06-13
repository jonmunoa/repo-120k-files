// fichero 40213 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40213;

Registro40213 crear_registro40213(int id) {
    Registro40213 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40213(Registro40213 r) {
    return r.valor + r.id;
}
