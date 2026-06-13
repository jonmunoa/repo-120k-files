// fichero 26901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26901;

Registro26901 crear_registro26901(int id) {
    Registro26901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26901(Registro26901 r) {
    return r.valor + r.id;
}
