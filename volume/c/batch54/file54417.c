// fichero 54417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54417;

Registro54417 crear_registro54417(int id) {
    Registro54417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54417(Registro54417 r) {
    return r.valor + r.id;
}
