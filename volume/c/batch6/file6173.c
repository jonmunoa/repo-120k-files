// fichero 6173 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6173;

Registro6173 crear_registro6173(int id) {
    Registro6173 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6173(Registro6173 r) {
    return r.valor + r.id;
}
