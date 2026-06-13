// fichero 44977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44977;

Registro44977 crear_registro44977(int id) {
    Registro44977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44977(Registro44977 r) {
    return r.valor + r.id;
}
