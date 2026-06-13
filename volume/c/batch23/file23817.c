// fichero 23817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23817;

Registro23817 crear_registro23817(int id) {
    Registro23817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23817(Registro23817 r) {
    return r.valor + r.id;
}
