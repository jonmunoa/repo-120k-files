// fichero 23949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23949;

Registro23949 crear_registro23949(int id) {
    Registro23949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23949(Registro23949 r) {
    return r.valor + r.id;
}
