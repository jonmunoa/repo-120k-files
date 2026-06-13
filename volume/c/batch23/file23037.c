// fichero 23037 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23037;

Registro23037 crear_registro23037(int id) {
    Registro23037 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23037(Registro23037 r) {
    return r.valor + r.id;
}
