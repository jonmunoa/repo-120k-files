// fichero 23149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23149;

Registro23149 crear_registro23149(int id) {
    Registro23149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23149(Registro23149 r) {
    return r.valor + r.id;
}
