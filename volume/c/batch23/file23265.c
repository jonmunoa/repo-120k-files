// fichero 23265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23265;

Registro23265 crear_registro23265(int id) {
    Registro23265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23265(Registro23265 r) {
    return r.valor + r.id;
}
