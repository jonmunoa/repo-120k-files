// fichero 23193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23193;

Registro23193 crear_registro23193(int id) {
    Registro23193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23193(Registro23193 r) {
    return r.valor + r.id;
}
