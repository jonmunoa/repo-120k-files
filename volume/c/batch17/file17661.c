// fichero 17661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17661;

Registro17661 crear_registro17661(int id) {
    Registro17661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17661(Registro17661 r) {
    return r.valor + r.id;
}
