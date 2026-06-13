// fichero 23289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23289;

Registro23289 crear_registro23289(int id) {
    Registro23289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23289(Registro23289 r) {
    return r.valor + r.id;
}
