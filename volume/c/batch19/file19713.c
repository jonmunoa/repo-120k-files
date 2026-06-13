// fichero 19713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19713;

Registro19713 crear_registro19713(int id) {
    Registro19713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19713(Registro19713 r) {
    return r.valor + r.id;
}
