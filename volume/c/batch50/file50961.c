// fichero 50961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50961;

Registro50961 crear_registro50961(int id) {
    Registro50961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50961(Registro50961 r) {
    return r.valor + r.id;
}
