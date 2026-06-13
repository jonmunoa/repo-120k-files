// fichero 49933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49933;

Registro49933 crear_registro49933(int id) {
    Registro49933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49933(Registro49933 r) {
    return r.valor + r.id;
}
