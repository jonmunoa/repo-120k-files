// fichero 23281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23281;

Registro23281 crear_registro23281(int id) {
    Registro23281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23281(Registro23281 r) {
    return r.valor + r.id;
}
