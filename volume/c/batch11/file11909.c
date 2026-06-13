// fichero 11909 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11909;

Registro11909 crear_registro11909(int id) {
    Registro11909 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11909(Registro11909 r) {
    return r.valor + r.id;
}
