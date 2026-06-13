// fichero 6601 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6601;

Registro6601 crear_registro6601(int id) {
    Registro6601 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6601(Registro6601 r) {
    return r.valor + r.id;
}
