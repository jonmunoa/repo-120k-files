// fichero 50429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50429;

Registro50429 crear_registro50429(int id) {
    Registro50429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50429(Registro50429 r) {
    return r.valor + r.id;
}
