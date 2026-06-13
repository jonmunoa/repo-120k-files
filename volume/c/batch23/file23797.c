// fichero 23797 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23797;

Registro23797 crear_registro23797(int id) {
    Registro23797 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23797(Registro23797 r) {
    return r.valor + r.id;
}
