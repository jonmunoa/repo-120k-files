// fichero 1977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1977;

Registro1977 crear_registro1977(int id) {
    Registro1977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1977(Registro1977 r) {
    return r.valor + r.id;
}
