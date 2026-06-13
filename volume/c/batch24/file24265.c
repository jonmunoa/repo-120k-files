// fichero 24265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24265;

Registro24265 crear_registro24265(int id) {
    Registro24265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24265(Registro24265 r) {
    return r.valor + r.id;
}
