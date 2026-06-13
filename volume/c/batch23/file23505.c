// fichero 23505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23505;

Registro23505 crear_registro23505(int id) {
    Registro23505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23505(Registro23505 r) {
    return r.valor + r.id;
}
