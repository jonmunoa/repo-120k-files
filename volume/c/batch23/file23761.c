// fichero 23761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23761;

Registro23761 crear_registro23761(int id) {
    Registro23761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23761(Registro23761 r) {
    return r.valor + r.id;
}
