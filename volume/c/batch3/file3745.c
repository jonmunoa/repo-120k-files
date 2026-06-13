// fichero 3745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3745;

Registro3745 crear_registro3745(int id) {
    Registro3745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3745(Registro3745 r) {
    return r.valor + r.id;
}
