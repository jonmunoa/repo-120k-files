// fichero 4977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro4977;

Registro4977 crear_registro4977(int id) {
    Registro4977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro4977(Registro4977 r) {
    return r.valor + r.id;
}
