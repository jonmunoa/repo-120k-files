// fichero 27977 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27977;

Registro27977 crear_registro27977(int id) {
    Registro27977 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27977(Registro27977 r) {
    return r.valor + r.id;
}
