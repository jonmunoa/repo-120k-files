// fichero 9477 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9477;

Registro9477 crear_registro9477(int id) {
    Registro9477 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9477(Registro9477 r) {
    return r.valor + r.id;
}
