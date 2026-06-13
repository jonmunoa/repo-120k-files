// fichero 50877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50877;

Registro50877 crear_registro50877(int id) {
    Registro50877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50877(Registro50877 r) {
    return r.valor + r.id;
}
