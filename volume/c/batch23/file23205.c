// fichero 23205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23205;

Registro23205 crear_registro23205(int id) {
    Registro23205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23205(Registro23205 r) {
    return r.valor + r.id;
}
