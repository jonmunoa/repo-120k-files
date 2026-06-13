// fichero 15313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15313;

Registro15313 crear_registro15313(int id) {
    Registro15313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15313(Registro15313 r) {
    return r.valor + r.id;
}
