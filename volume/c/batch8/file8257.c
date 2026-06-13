// fichero 8257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8257;

Registro8257 crear_registro8257(int id) {
    Registro8257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8257(Registro8257 r) {
    return r.valor + r.id;
}
