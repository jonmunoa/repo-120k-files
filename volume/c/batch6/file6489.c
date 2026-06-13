// fichero 6489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6489;

Registro6489 crear_registro6489(int id) {
    Registro6489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6489(Registro6489 r) {
    return r.valor + r.id;
}
