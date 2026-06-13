// fichero 6281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6281;

Registro6281 crear_registro6281(int id) {
    Registro6281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6281(Registro6281 r) {
    return r.valor + r.id;
}
