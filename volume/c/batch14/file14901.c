// fichero 14901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14901;

Registro14901 crear_registro14901(int id) {
    Registro14901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14901(Registro14901 r) {
    return r.valor + r.id;
}
