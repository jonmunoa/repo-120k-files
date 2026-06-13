// fichero 50165 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50165;

Registro50165 crear_registro50165(int id) {
    Registro50165 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50165(Registro50165 r) {
    return r.valor + r.id;
}
