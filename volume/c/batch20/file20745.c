// fichero 20745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20745;

Registro20745 crear_registro20745(int id) {
    Registro20745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20745(Registro20745 r) {
    return r.valor + r.id;
}
