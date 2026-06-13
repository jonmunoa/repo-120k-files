// fichero 23713 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23713;

Registro23713 crear_registro23713(int id) {
    Registro23713 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23713(Registro23713 r) {
    return r.valor + r.id;
}
