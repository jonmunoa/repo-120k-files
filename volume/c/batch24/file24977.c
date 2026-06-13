// fichero 24977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24977;

Registro24977 crear_registro24977(int id) {
    Registro24977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24977(Registro24977 r) {
    return r.valor + r.id;
}
