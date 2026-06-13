// fichero 23661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23661;

Registro23661 crear_registro23661(int id) {
    Registro23661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23661(Registro23661 r) {
    return r.valor + r.id;
}
