// fichero 2533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2533;

Registro2533 crear_registro2533(int id) {
    Registro2533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2533(Registro2533 r) {
    return r.valor + r.id;
}
