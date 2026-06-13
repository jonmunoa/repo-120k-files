// fichero 45953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45953;

Registro45953 crear_registro45953(int id) {
    Registro45953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45953(Registro45953 r) {
    return r.valor + r.id;
}
