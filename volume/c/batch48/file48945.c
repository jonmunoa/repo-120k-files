// fichero 48945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48945;

Registro48945 crear_registro48945(int id) {
    Registro48945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48945(Registro48945 r) {
    return r.valor + r.id;
}
