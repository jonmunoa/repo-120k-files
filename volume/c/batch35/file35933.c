// fichero 35933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35933;

Registro35933 crear_registro35933(int id) {
    Registro35933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35933(Registro35933 r) {
    return r.valor + r.id;
}
