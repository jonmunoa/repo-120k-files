// fichero 6105 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6105;

Registro6105 crear_registro6105(int id) {
    Registro6105 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6105(Registro6105 r) {
    return r.valor + r.id;
}
