// fichero 23985 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23985;

Registro23985 crear_registro23985(int id) {
    Registro23985 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23985(Registro23985 r) {
    return r.valor + r.id;
}
