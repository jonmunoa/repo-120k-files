// fichero 23177 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23177;

Registro23177 crear_registro23177(int id) {
    Registro23177 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23177(Registro23177 r) {
    return r.valor + r.id;
}
