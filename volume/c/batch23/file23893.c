// fichero 23893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23893;

Registro23893 crear_registro23893(int id) {
    Registro23893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23893(Registro23893 r) {
    return r.valor + r.id;
}
