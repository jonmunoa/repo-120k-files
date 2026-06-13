// fichero 45157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45157;

Registro45157 crear_registro45157(int id) {
    Registro45157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45157(Registro45157 r) {
    return r.valor + r.id;
}
