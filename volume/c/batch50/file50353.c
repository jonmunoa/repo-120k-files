// fichero 50353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50353;

Registro50353 crear_registro50353(int id) {
    Registro50353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50353(Registro50353 r) {
    return r.valor + r.id;
}
