// fichero 26837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26837;

Registro26837 crear_registro26837(int id) {
    Registro26837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26837(Registro26837 r) {
    return r.valor + r.id;
}
