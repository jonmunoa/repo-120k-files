// fichero 23485 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23485;

Registro23485 crear_registro23485(int id) {
    Registro23485 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23485(Registro23485 r) {
    return r.valor + r.id;
}
