// fichero 15793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15793;

Registro15793 crear_registro15793(int id) {
    Registro15793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15793(Registro15793 r) {
    return r.valor + r.id;
}
