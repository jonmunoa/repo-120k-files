// fichero 54977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro54977;

Registro54977 crear_registro54977(int id) {
    Registro54977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro54977(Registro54977 r) {
    return r.valor + r.id;
}
