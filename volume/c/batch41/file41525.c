// fichero 41525 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41525;

Registro41525 crear_registro41525(int id) {
    Registro41525 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41525(Registro41525 r) {
    return r.valor + r.id;
}
