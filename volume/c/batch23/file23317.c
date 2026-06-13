// fichero 23317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23317;

Registro23317 crear_registro23317(int id) {
    Registro23317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23317(Registro23317 r) {
    return r.valor + r.id;
}
