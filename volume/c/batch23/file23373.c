// fichero 23373 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23373;

Registro23373 crear_registro23373(int id) {
    Registro23373 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23373(Registro23373 r) {
    return r.valor + r.id;
}
