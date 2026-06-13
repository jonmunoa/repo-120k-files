// fichero 23617 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23617;

Registro23617 crear_registro23617(int id) {
    Registro23617 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23617(Registro23617 r) {
    return r.valor + r.id;
}
