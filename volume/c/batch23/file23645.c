// fichero 23645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23645;

Registro23645 crear_registro23645(int id) {
    Registro23645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23645(Registro23645 r) {
    return r.valor + r.id;
}
