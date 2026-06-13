// fichero 23085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23085;

Registro23085 crear_registro23085(int id) {
    Registro23085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23085(Registro23085 r) {
    return r.valor + r.id;
}
