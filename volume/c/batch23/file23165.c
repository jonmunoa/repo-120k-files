// fichero 23165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23165;

Registro23165 crear_registro23165(int id) {
    Registro23165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23165(Registro23165 r) {
    return r.valor + r.id;
}
