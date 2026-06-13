// fichero 23241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23241;

Registro23241 crear_registro23241(int id) {
    Registro23241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23241(Registro23241 r) {
    return r.valor + r.id;
}
