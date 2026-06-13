// fichero 6257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6257;

Registro6257 crear_registro6257(int id) {
    Registro6257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6257(Registro6257 r) {
    return r.valor + r.id;
}
