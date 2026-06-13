// fichero 50513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50513;

Registro50513 crear_registro50513(int id) {
    Registro50513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50513(Registro50513 r) {
    return r.valor + r.id;
}
