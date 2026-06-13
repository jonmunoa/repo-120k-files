// fichero 50225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50225;

Registro50225 crear_registro50225(int id) {
    Registro50225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50225(Registro50225 r) {
    return r.valor + r.id;
}
